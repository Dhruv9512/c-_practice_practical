#include <bits/stdc++.h>
#include<string.h>
#include<cmath>

// Function Declaration
std::string getCurrentTime();
std::string Current_Date();
void Generate_Invoice();


// class for items
class items
{
    public:
        std::string item;
        int quantity;
        double price;
        
};

// class for invoices
class invoices
{
private:
    std::string name;
    int size;
    items*ptr;
    std::string date;
    std::string time;
public:
    // constructer
    invoices(std::string name , int n){
        this->ptr = new items[n];
        this->name = name;
        this->size = n;
    }

    // Total price function
    double total(){
        int ans=0;
        for (int i = 0; i < this->size; i++)
        {
            ans = ans +  (this->ptr[i].price * this->ptr[i].quantity);
        }
        return ans;
    }

    // Display invoice function
    void Display(){
        this->date = Current_Date();
        this->time = getCurrentTime();

        // Display Invoice
        std::cout<<"\n\n\n\n\n\t\t    RPD. RESTAURANT\n";
        std::cout<<"\t\t----------------------\n";

        std::cout<<"Date: "<<this->date<<"\n";
        std::cout<<"Time: "<<this->time<<"\n";
        std::cout<<"Invoice To: "<<this->name<<"\n";
        std::cout<<"------------------------------------------\n";
        std::cout<<"Items\t\tQty\t\tTotal\n";
        std::cout<<"------------------------------------------\n\n";
        for (int i = 0; i < this->size; i++)
        {
            std::cout<<this->ptr[i].item<<"\t\t"<<this->ptr[i].quantity<<"\t\t"<<(this->ptr[i].price * this->ptr[i].quantity)<<"\n";
        }
        std::cout<<"------------------------------------------\n";
        double sub_total = total();
        std::cout<<"Sub Total\t\t\t"<<sub_total<<"\n";
        double net_total = (sub_total - (sub_total*0.1));
        std::cout<<"Discount @10%\t\t\t"<<net_total<<"\n";
        std::cout<<"\t\t\t\t--------\n";
        std::cout<<"Net Total\t\t\t"<<net_total<<"\n";
        float cgst = net_total*0.09;
        std::cout<<"CGST @9%\t\t\t"<<cgst<<"\n";
        float sgst = net_total*0.09;
        std::cout<<"CGST @9%\t\t\t"<<sgst<<"\n";
        double Grand_Total = net_total + cgst + sgst;
        std::cout<<"------------------------------------------\n";
        std::cout<<"Grand Total\t\t\t"<<Grand_Total<<"\n";
        std::cout<<"------------------------------------------\n";
    }

    void Generate(){
        for (int i = 0; i < this->size; i++)
        {   
            // Take item
            std::string item;
            std::cout<<"\n\nPlease enter the item "<<i+1<<":\t";
            std::cin>>item;
            this->ptr[i].item = item;

            // Take quantity
            int q;
            std::cout<<"Please enter the quantity:\t";
            std::cin>>q;
            this->ptr[i].quantity = q;

            // Take price
            int p;
            std::cout<<"Please enter the unit price:\t";
            std::cin>>p;
            this->ptr[i].price = p;
        }   
            Display();
    } 
};



int main(){
    int c;
    do
    {  
        std::cout<<"\n\n\n\n\n";
        std::cout << "============ RPD. RESTAURANT ============"<< "\n";
        std::cout << "Please select your prefered operation"<<"\n";
        std::cout << "1.Generate Invoice\n2.Show all Invoices\n3.Search Invoice\n4.Exit";
        std::cout<<"\n\nYour Choice:- ";
        std::cin >> c;

        // switch case 
        switch (c)
        {
        case 1:
            Generate_Invoice();
            break;
        
        default:
            std::cout<<"Choice valid operation...";
            break;
        }
    } while (c!=2);
    
    return 0;
}

//----------------------------- Function Definition----------------------

// For generate invoice
void Generate_Invoice(){
    // Name of customer
    std::string customer_name;
    std::cout << "Please enter the name of the customer:- ";
    std::cin>>customer_name;

    // Number of item
    int n;
    std::cout << "Please enter the  number of items:- ";
    std::cin >> n;

    invoices invoice(customer_name,n);
    invoice.Generate();
}

// Current time from chatgpt
std::string getCurrentTime() {
     // Get current time as a time_point
    auto now = std::chrono::system_clock::now();
    
    // Convert to time_t for easy formatting
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    
    // Convert to local time
    std::tm* localTime = std::localtime(&now_c);
    
    // Format the time as 12-hour format with A.M. or P.M.
    std::ostringstream oss;
    oss << std::put_time(localTime, "%I:%M %p"); // Format: HH:MM A.M./P.M.
    
    return oss.str();
}

// current Date From Chatgpt
std::string Current_Date(){
    // Get the current time
    std::time_t currentTime = std::time(nullptr);

    // Convert to local time
    std::tm* localTime = std::localtime(&currentTime);

    // Format the date into a string
    char buffer[100];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d", localTime);

    return std::string(buffer);
}

