/// Online C++ compiler to run C++ program online
#include <iostream>
#include <unistd.h>

// So I don't have to use "std::" everytime
using namespace std;

//Variables Integer and String
int Scanning,depamount, withamount, alternative;
string UserChoice, YorN, Logout ;

void code()
{
   
    cout<< "Would you like to Logg out ?(Y/N)"<<endl;
    cin >> Logout;
    if (Logout == "Y"||Logout == "y")
    {
        
        cout<<"--------------------------------------------"<<endl;
        cout<<"Please Wait! System is Logging off and Cleaning the Finger Scanner"<<endl;
        sleep(5);
        cout<<"--------------------------------------------"<<endl;
        cout<< "Logged out of the system"<<endl;
        cout<<"--------------------------------------------"<<endl;
        exit(0);
    }
    else if (Logout == "N"|| Logout == "n")
    {
        // Output where user want to deposit or withdraw
            cout<<"What would you like to do Deposit or Withdraw?"<< endl;
            cout<<"Please Enter [('Deposit or D') to Deposit] OR [('Withdraw or W') to Withdraw] "<<endl;
           
            //Userinput stored in UserChoice variable
            cin >> UserChoice;
           
            // if statement to check what user enter if it is "Deposit" or "DEPOSIT" or "d" or "D" do the following
            if (UserChoice == "Deposit"||UserChoice == "DEPOSIT"||UserChoice == "d"||UserChoice == "D" )
            {
                cout<<"--------------------------------------------"<<endl;
                // program ouput the amount user want to deposit
                cout<<"Please enter the amount you want to deposit (£)?"<< endl;
               
                //User inputs and store the value in depamount varaible
                cin >> depamount;
               
                // program output the amount user input asks if user want to confirm or decline (Validation)
                cout << "Deposit Amount = "<< depamount<< " [Press Y to Confirm or N to decline]"<<endl;
                //user input and data get stored in YorN variable
                cin>> YorN;
               
               // checking if user enter "Y" or "y" if they done that then do the following
                if (YorN =="Y"|| YorN =="y")
                {
                    // output deposit confirmation
                cout   <<"_____________________________"<<endl;      
                cout<< "Deposit Confirmed."  <<endl;
                cout<< "Deposit Receipt: " <<endl;
                cout<< "£ " << depamount <<" : Deposited into Your Bank"<<endl;
                cout   <<"_____________________________"<<endl;      
                    //loop
                  code();
                }
               
                //checking if user enter "N" or "n" if they done that then do the following    
                if (YorN =="N"||YorN =="n")
                {
                    // output deposit cancelled
                cout   <<"_____________________________"<<endl;      
                cout<< "Deposit is Cancelled. "  <<endl;
                cout   <<"_____________________________"<<endl;      
                    //loop
                 code();
                }
            }
            // if statement to check what user enter if it is "Withdraw" or "WITHDRAW" or "w" or "W" do the following
            if (UserChoice == "Withdraw"||UserChoice == "WITHDRAW" ||UserChoice == "W" ||UserChoice == "w")
            {
                cout<<"--------------------------------------------"<<endl;
                // program ouput the amount user want to Withdraw
                cout<<"Please enter the amount you want to Withdraw (£)?"<< endl;
                //User input the amount and it get stored in withamount varibale
                cin>>withamount;
               
                //While loop to validate. The codition is until withamount is bigger than 5000 it will keep on doing the following
                while (withamount > 5000)
                {
                    //error message and asked user to enter again
                    cout<< "[Amount over 5000£ Cannnot be Withdraw]"<<endl;
                    cout<<"Please Try Again?"<< endl;
                    // user enter and value get stored in withamount varaible
                    cin>>withamount;
                }
               
                cout<<"Withdraw Amount = "<< withamount<< " [Press Y to Confirm or N to decline]"<<endl;
                 cin>> YorN;
                 
                //checking if user enter "Y" or "y" if they done that then do the following
                 if (YorN =="Y"|| YorN =="y")
                {
                    // output Withdraw confirmation
                cout   <<"_____________________________"<<endl;      
                 cout<< "Withdraw Confirmed."  <<endl;
                cout<< "Wihtdraw Receipt: " <<endl;
                cout<< "£" << withamount <<" : taken from Your Bank"<<endl;
                cout   <<"_____________________________"<<endl;      
                   
                  code();
                }
                //checking if user enter "Y" or "y" if they done that then do the following
                if (YorN =="N"||YorN =="n")
                {
                    // output Withdraw Cancelled
                cout   <<"_____________________________"<<endl;      
                cout<< "Withdraw is Cancelled" <<endl;
                cout   <<"_____________________________"<<endl;      
                    // code
                 code();
                }
            }
           
           
           
           
           
    }
     
}
   

int main() {
    // outputs Welcome message and asks user to enter Finger Scanner
    cout << "Welcome to Online Banking"<<endl;
    cout<<"--------------------------------------------"<<endl;
    
     
    
    
     cout << "Please Scan your Finger ID"<< endl;
       
   
    //For Loop use for 3 attempts
    for (int i = 3 ; i>=0; i--)
    {
        //user input thier finger ID stored in Scanning varaible
        cin>> Scanning;

       // IF finger ID is correct then do the following
        if (Scanning == 1)
        {
            // Displays welcome message
            cout<<"--------------------------------------------"<<endl;
            cout<< "Finger Scanned Welcome to the Online Banking"<< endl;
            cout<<"--------------------------------------------"<<endl;
           
            // Output where user want to deposit or withdraw
            cout<<"What would you like to do Deposit or Withdraw?"<< endl;
            cout<<"Please Enter [('Deposit or D') to Deposit] OR [('Withdraw or W') to Withdraw] "<<endl;
           
            //Userinput stored in UserChoice variable
            cin >> UserChoice;
           
            // if statement to check what user enter if it is "Deposit" or "DEPOSIT" or "d" or "D" do the following
            if (UserChoice == "Deposit"||UserChoice == "DEPOSIT"||UserChoice == "d"||UserChoice == "D" )
            {
                cout<<"--------------------------------------------"<<endl;
                // program ouput the amount user want to deposit
                cout<<"Please enter the amount you want to deposit (£)?"<< endl;
               
                //User inputs and store the value in depamount varaible
                cin >> depamount;
               
                // program output the amount user input asks if user want to confirm or decline (Validation)
                cout << "Deposit Amount = "<< depamount<< " [Press Y to Confirm or N to decline]"<<endl;
                //user input and data get stored in YorN variable
                cin>> YorN;
               
               // checking if user enter "Y" or "y" if they done that then do the following
                if (YorN =="Y"|| YorN =="y")
                {
                        // output deposit confirmation
                cout   <<"_____________________________"<<endl;      
                cout<< "Deposit Confirmed."  <<endl;
                cout<< "Deposit Receipt: " <<endl;
                cout<< "£" << depamount<<" : Deposited into Your Bank"<<endl;
                cout   <<"_____________________________"<<endl;      
                    //loop
                  code();
                }
               
                //checking if user enter "N" or "n" if they done that then do the following    
                if (YorN =="N"||YorN =="n")
                {
                        // output deposit cancelled
                cout   <<"_____________________________"<<endl;      
                cout<< "Deposit is Cancelled. "  <<endl;
                cout   <<"_____________________________"<<endl;      
                    //loop
                 code();
                }
            }
            // if statement to check what user enter if it is "Withdraw" or "WITHDRAW" or "w" or "W" do the following
            if (UserChoice == "Withdraw"||UserChoice == "WITHDRAW" ||UserChoice == "W" ||UserChoice == "w")
            {
                cout<<"--------------------------------------------"<<endl;
                // program ouput the amount user want to Withdraw
                cout<<"Please enter the amount you want to Withdraw (£)?"<< endl;
                //User input the amount and it get stored in withamount varibale
                cin>>withamount;
               
                //While loop to validate. The codition is until withamount is bigger than 5000 it will keep on doing the following
                while (withamount > 5000)
                {
                    //error message and asked user to enter again
                    cout<< "[Amount over 5000£ Cannnot be Withdraw]"<<endl;
                    cout<<"Please Try Again?"<< endl;
                    // user enter and value get stored in withamount varaible
                    cin>>withamount;
                }
               
                cout<<"Withdraw Amount = "<< withamount<< " [Press Y to Confirm or N to decline]"<<endl;
                 cin>> YorN;
                 
                //checking if user enter "Y" or "y" if they done that then do the following
                 if (YorN =="Y"|| YorN =="y")
                {
                      // output Withdraw confirmation
                cout   <<"_____________________________"<<endl;      
                 cout<< "Withdraw Confirmed."  <<endl;
                cout<< "Wihtdraw Receipt: " <<endl;
                cout<< "£" << withamount<<" : taken from Your Bank"<<endl;
                cout   <<"_____________________________"<<endl;      
                   
                  code();
                }
                //checking if user enter "Y" or "y" if they done that then do the following
                if (YorN =="N"||YorN =="n")
                {
                        // output Withdraw Cancelled
                cout   <<"_____________________________"<<endl;      
                cout<< "Withdraw is Cancelled" <<endl;
                cout   <<"_____________________________"<<endl;      
                    // code
                 code();
                }
            }
           
           
           
           
           
        }
        //else the program will do the follwong
        else
        // output sign in problem with the number of attempts left
        cout << "Sign In Problem, ("<<i<<" attempt left) Please Try Again "<< endl;
            cout<<"--------------------------------------------"<<endl;
        
    // adding the alternative
    cout<<"For Alternative Login Please enter one of the following number: "<<endl;
    cout<<"(1) Phone  (2) Smart watch  (3) Letter (4) To Try finger Scan again"<<endl;
    cin >> alternative;
    
    if (alternative == 1)
    {
        
            // Displays welcome message
            cout<<"--------------------------------------------"<<endl;
            cout<< "Phone authenticated! Welcome to the Online Banking"<< endl;
            cout<<"--------------------------------------------"<<endl;
           
            // Output where user want to deposit or withdraw
            cout<<"What would you like to do Deposit or Withdraw?"<< endl;
            cout<<"Please Enter [('Deposit or D') to Deposit] OR [('Withdraw or W') to Withdraw] "<<endl;
           
            //Userinput stored in UserChoice variable
            cin >> UserChoice;
           
            // if statement to check what user enter if it is "Deposit" or "DEPOSIT" or "d" or "D" do the following
            if (UserChoice == "Deposit"||UserChoice == "DEPOSIT"||UserChoice == "d"||UserChoice == "D" )
            {
                cout<<"--------------------------------------------"<<endl;
                // program ouput the amount user want to deposit
                cout<<"Please enter the amount you want to deposit (£)?"<< endl;
               
                //User inputs and store the value in depamount varaible
                cin >> depamount;
               
                // program output the amount user input asks if user want to confirm or decline (Validation)
                cout << "Deposit Amount = "<< depamount<< " [Press Y to Confirm or N to decline]"<<endl;
                //user input and data get stored in YorN variable
                cin>> YorN;
               
               // checking if user enter "Y" or "y" if they done that then do the following
                if (YorN =="Y"|| YorN =="y")
                {
                        // output deposit confirmation
                cout   <<"_____________________________"<<endl;      
                cout<< "Deposit Confirmed."  <<endl;
                cout<< "Deposit Receipt: " <<endl;
                cout<< "£" << depamount<<" : Deposited into Your Bank"<<endl;
                cout   <<"_____________________________"<<endl;      
                    //loop
                  code();
                }
               
                //checking if user enter "N" or "n" if they done that then do the following    
                if (YorN =="N"||YorN =="n")
                {
                        // output deposit cancelled
                cout   <<"_____________________________"<<endl;      
                cout<< "Deposit is Cancelled. "  <<endl;
                cout   <<"_____________________________"<<endl;      
                    //loop
                 code();
                }
            }
            // if statement to check what user enter if it is "Withdraw" or "WITHDRAW" or "w" or "W" do the following
            if (UserChoice == "Withdraw"||UserChoice == "WITHDRAW" ||UserChoice == "W" ||UserChoice == "w")
            {
                cout<<"--------------------------------------------"<<endl;
                // program ouput the amount user want to Withdraw
                cout<<"Please enter the amount you want to Withdraw (£)?"<< endl;
                //User input the amount and it get stored in withamount varibale
                cin>>withamount;
               
                //While loop to validate. The codition is until withamount is bigger than 5000 it will keep on doing the following
                while (withamount > 5000)
                {
                    //error message and asked user to enter again
                    cout<< "[Amount over 5000£ Cannnot be Withdraw]"<<endl;
                    cout<<"Please Try Again?"<< endl;
                    // user enter and value get stored in withamount varaible
                    cin>>withamount;
                }
               
                cout<<"Withdraw Amount = "<< withamount<< " [Press Y to Confirm or N to decline]"<<endl;
                 cin>> YorN;
                 
                //checking if user enter "Y" or "y" if they done that then do the following
                 if (YorN =="Y"|| YorN =="y")
                {
                      // output Withdraw confirmation
                cout   <<"_____________________________"<<endl;      
                 cout<< "Withdraw Confirmed."  <<endl;
                cout<< "Wihtdraw Receipt: " <<endl;
                cout<< "£" << withamount<<" : taken from Your Bank"<<endl;
                cout   <<"_____________________________"<<endl;      
                   
                  code();
                }
                //checking if user enter "Y" or "y" if they done that then do the following
                if (YorN =="N"||YorN =="n")
                {
                        // output Withdraw Cancelled
                cout   <<"_____________________________"<<endl;      
                cout<< "Withdraw is Cancelled" <<endl;
                cout   <<"_____________________________"<<endl;      
                    // code
                 code();
                }
            }
        }

    if (alternative == 2)
    {
        
            // Displays welcome message
            cout<<"--------------------------------------------"<<endl;
            cout<< "Smart watch authenticated! Welcome to the Online Banking"<< endl;
            cout<<"--------------------------------------------"<<endl;
           
            // Output where user want to deposit or withdraw
            cout<<"What would you like to do Deposit or Withdraw?"<< endl;
            cout<<"Please Enter [('Deposit or D') to Deposit] OR [('Withdraw or W') to Withdraw] "<<endl;
           
            //Userinput stored in UserChoice variable
            cin >> UserChoice;
           
            // if statement to check what user enter if it is "Deposit" or "DEPOSIT" or "d" or "D" do the following
            if (UserChoice == "Deposit"||UserChoice == "DEPOSIT"||UserChoice == "d"||UserChoice == "D" )
            {
                cout<<"--------------------------------------------"<<endl;
                // program ouput the amount user want to deposit
                cout<<"Please enter the amount you want to deposit (£)?"<< endl;
               
                //User inputs and store the value in depamount varaible
                cin >> depamount;
               
                // program output the amount user input asks if user want to confirm or decline (Validation)
                cout << "Deposit Amount = "<< depamount<< " [Press Y to Confirm or N to decline]"<<endl;
                //user input and data get stored in YorN variable
                cin>> YorN;
               
               // checking if user enter "Y" or "y" if they done that then do the following
                if (YorN =="Y"|| YorN =="y")
                {
                        // output deposit confirmation
                cout   <<"_____________________________"<<endl;      
                cout<< "Deposit Confirmed."  <<endl;
                cout<< "Deposit Receipt: " <<endl;
                cout<< "£" << depamount<<" : Deposited into Your Bank"<<endl;
                cout   <<"_____________________________"<<endl;      
                    //loop
                  code();
                }
               
                //checking if user enter "N" or "n" if they done that then do the following    
                if (YorN =="N"||YorN =="n")
                {
                        // output deposit cancelled
                cout   <<"_____________________________"<<endl;      
                cout<< "Deposit is Cancelled. "  <<endl;
                cout   <<"_____________________________"<<endl;      
                    //loop
                 code();
                }
            }
            // if statement to check what user enter if it is "Withdraw" or "WITHDRAW" or "w" or "W" do the following
            if (UserChoice == "Withdraw"||UserChoice == "WITHDRAW" ||UserChoice == "W" ||UserChoice == "w")
            {
                cout<<"--------------------------------------------"<<endl;
                // program ouput the amount user want to Withdraw
                cout<<"Please enter the amount you want to Withdraw (£)?"<< endl;
                //User input the amount and it get stored in withamount varibale
                cin>>withamount;
               
                //While loop to validate. The codition is until withamount is bigger than 5000 it will keep on doing the following
                while (withamount > 5000)
                {
                    //error message and asked user to enter again
                    cout<< "[Amount over 5000£ Cannnot be Withdraw]"<<endl;
                    cout<<"Please Try Again?"<< endl;
                    // user enter and value get stored in withamount varaible
                    cin>>withamount;
                }
               
                cout<<"Withdraw Amount = "<< withamount<< " [Press Y to Confirm or N to decline]"<<endl;
                 cin>> YorN;
                 
                //checking if user enter "Y" or "y" if they done that then do the following
                 if (YorN =="Y"|| YorN =="y")
                {
                      // output Withdraw confirmation
                cout   <<"_____________________________"<<endl;      
                 cout<< "Withdraw Confirmed."  <<endl;
                cout<< "Wihtdraw Receipt: " <<endl;
                cout<< "£" << withamount<<" : taken from Your Bank"<<endl;
                cout   <<"_____________________________"<<endl;      
                   
                  code();
                }
                //checking if user enter "Y" or "y" if they done that then do the following
                if (YorN =="N"||YorN =="n")
                {
                        // output Withdraw Cancelled
                cout   <<"_____________________________"<<endl;      
                cout<< "Withdraw is Cancelled" <<endl;
                cout   <<"_____________________________"<<endl;      
                    // code
                 code();
                }
            }
        
        }
      if (alternative == 3)
      {
          
        
            // Displays welcome message
            cout<<"--------------------------------------------"<<endl;
            cout<< "Letter authenticated! Welcome to the Online Banking"<< endl;
            cout<<"--------------------------------------------"<<endl;
           
            // Output where user want to deposit or withdraw
            cout<<"What would you like to do Deposit or Withdraw?"<< endl;
            cout<<"Please Enter [('Deposit or D') to Deposit] OR [('Withdraw or W') to Withdraw] "<<endl;
           
            //Userinput stored in UserChoice variable
            cin >> UserChoice;
           
            // if statement to check what user enter if it is "Deposit" or "DEPOSIT" or "d" or "D" do the following
            if (UserChoice == "Deposit"||UserChoice == "DEPOSIT"||UserChoice == "d"||UserChoice == "D" )
            {
                cout<<"--------------------------------------------"<<endl;
                // program ouput the amount user want to deposit
                cout<<"Please enter the amount you want to deposit (£)?"<< endl;
               
                //User inputs and store the value in depamount varaible
                cin >> depamount;
               
                // program output the amount user input asks if user want to confirm or decline (Validation)
                cout << "Deposit Amount = "<< depamount<< " [Press Y to Confirm or N to decline]"<<endl;
                //user input and data get stored in YorN variable
                cin>> YorN;
               
               // checking if user enter "Y" or "y" if they done that then do the following
                if (YorN =="Y"|| YorN =="y")
                {
                        // output deposit confirmation
                cout   <<"_____________________________"<<endl;      
                cout<< "Deposit Confirmed."  <<endl;
                cout<< "Deposit Receipt: " <<endl;
                cout<< "£" << depamount<<" : Deposited into Your Bank"<<endl;
                cout   <<"_____________________________"<<endl;      
                    //loop
                  code();
                }
               
                //checking if user enter "N" or "n" if they done that then do the following    
                if (YorN =="N"||YorN =="n")
                {
                        // output deposit cancelled
                cout   <<"_____________________________"<<endl;      
                cout<< "Deposit is Cancelled. "  <<endl;
                cout   <<"_____________________________"<<endl;      
                    //loop
                 code();
                }
            }
            // if statement to check what user enter if it is "Withdraw" or "WITHDRAW" or "w" or "W" do the following
            if (UserChoice == "Withdraw"||UserChoice == "WITHDRAW" ||UserChoice == "W" ||UserChoice == "w")
            {
                cout<<"--------------------------------------------"<<endl;
                // program ouput the amount user want to Withdraw
                cout<<"Please enter the amount you want to Withdraw (£)?"<< endl;
                //User input the amount and it get stored in withamount varibale
                cin>>withamount;
               
                //While loop to validate. The codition is until withamount is bigger than 5000 it will keep on doing the following
                while (withamount > 5000)
                {
                    //error message and asked user to enter again
                    cout<< "[Amount over 5000£ Cannnot be Withdraw]"<<endl;
                    cout<<"Please Try Again?"<< endl;
                    // user enter and value get stored in withamount varaible
                    cin>>withamount;
                }
               
                cout<<"Withdraw Amount = "<< withamount<< " [Press Y to Confirm or N to decline]"<<endl;
                 cin>> YorN;
                 
                //checking if user enter "Y" or "y" if they done that then do the following
                 if (YorN =="Y"|| YorN =="y")
                {
                      // output Withdraw confirmation
                cout   <<"_____________________________"<<endl;      
                 cout<< "Withdraw Confirmed."  <<endl;
                cout<< "Wihtdraw Receipt: " <<endl;
                cout<< "£" << withamount<<" : taken from Your Bank"<<endl;
                cout   <<"_____________________________"<<endl;      
                   
                  code();
                }
                //checking if user enter "Y" or "y" if they done that then do the following
                if (YorN =="N"||YorN =="n")
                {
                        // output Withdraw Cancelled
                cout   <<"_____________________________"<<endl;      
                cout<< "Withdraw is Cancelled" <<endl;
                cout   <<"_____________________________"<<endl;      
                    // code
                 code();
                }
            }
        
          }

    else if (alternative == 4)
    {
        cout<<"Please try again Finger Scan Again!"<<endl;
        }
       
    }
    // After all the attempts done and checking if Scanning is still not equal to 1 if that true then it does the following
    if ( Scanning !=1)
    {
        cout<<"--------------------------------------------"<<endl;
        // outputs locked account and contact customer service
        cout<<"[ATTENTION ACCOUNT LOCKED!]"<<endl;
        sleep(2);
        cout<< "Please Contact Customer Service, BYE"<<endl;
        cout<<"--------------------------------------------"<<endl;
        // end the program
        exit(0);}
   
    //returns 0;
    return 0;
}

