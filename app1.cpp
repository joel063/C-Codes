#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int data;
    char selection;
    float mean {0};
    int small = INT_MAX;
    vector <int> vec1{};
    do{
        cout<<"----------------------------------"<<endl;
    cout<<"P - print the list"<<endl;
    cout<<"A - add a Number to list"<<endl;
    cout<<"Z - sum of the list"<<endl;
    cout<<"K - product of the list"<<endl;
    cout<<"M - mean of the numbers in list"<<endl;
    cout<<"S - smallest Number in list"<<endl;
    cout<<"L - largest Number in list"<<endl;
    cout<<"C - clear the elements in list"<<endl;
    cout<<"F - find a number in the list"<<endl;
    cout<<"Q - quit"<<endl;

    cout<<"----------------------------------"<<endl;

    cout<<"Enter your selection:";
    cin>>selection;

    switch (selection)
    {
        case 'a':
        case 'A':

        
            cout<<"Enter the integer:";
            cin>>data;
            
            vec1.push_back(data);
            cout<<data<<" added to the list."<<endl;
            cout<<"----------------------------------"<<endl;
            
        
        break;

        case 'p':
        case 'P':
        if(vec1.size()>=1)
        {
            cout <<"Your list "<<endl;
            cout<<"[ ";

            for(auto val :vec1)
            {
              cout<<val<<" ";
              
            }
            cout<<"]";
            cout<<endl;
        }
        else
        cout<<"The list is empty."<<endl;
        break;

        case 's':
        case 'S':

        
        if(vec1.size()>=1)
        {
            for(auto val : vec1)
            {
             if(val<small)
             small = val;
            }
            cout<<small<<" is the smallest in the list."<<endl;
        }
        else 
        cout<<"The list is empty."<<endl;

        break;

        case 'L':
        case 'l':

        
        if(vec1.size()>=1)
        {
            int large {0};
            for(auto val : vec1)
            {
             if(val>large)
             large = val;
            }
            cout<<large<<" is the largest in the list."<<endl;
        }
        else 
        cout<<"The list is empty."<<endl;

        break;

        case 'm':
        case 'M':
        if(vec1.size()>=1)
        {
            for(auto val: vec1)
            {
                
                mean = mean + val;
                 
            }
            float tmean;
            tmean = mean/vec1.size();
            cout<<tmean<<" is the mean of the list."<<endl;
        }
        else
        cout<<"The List is empty."<<endl;

        break;

        case 'c':
        case 'C':
        if(vec1.size()>=1)
        {
         vec1.clear();
         cout<<"The list is cleared"<<endl;
        }
        else
        cout<<"The list is empty."<<endl;


        break;

        case 'f':
        case 'F':
        if(vec1.size()>=1)
        {
         int num1,count{0};
         cout<<"Enter the number:";
         cin>>num1;

         for(auto val :vec1)
         {
            if(num1==val)
            {
                count++;

            }

         }
            if(count>=1)
            {
             cout<<num1<<" is present "<<count<<" times in the list."<<endl;
            }
            else 
            cout<<num1<<" is not in the list"<<endl;

        }
        else 
        cout<<"The list is empty."<<endl;


        break;

        case 'z':
        case 'Z':
        if(vec1.size()>=1)
        {
            int sum{0};
            for(auto val :vec1)
            {
                sum = sum + val;
            }
            cout<<sum<<" is the sum of the list."<<endl;


        }
        else
        cout<<"The list is empty."<<endl;

        break;

        case 'k':
        case 'K':
        if(vec1.size()>=1)
        {
            long long pdt{1};
            for(auto val :vec1)
            {
                pdt = pdt * val;
            }
            cout<<pdt<<" is the product of the list."<<endl;


        }
        else
        cout<<"The list is empty."<<endl;




        break;

        case 'q':
        case 'Q':
        cout<<"Good Bye."<<endl;
        break;


        default:
        cout<<"Invalid selection"<<endl;
        cout<<"----------------------------------"<<endl;


    }



    }while(selection !='q' && selection !='Q');
    



    return 0;
}