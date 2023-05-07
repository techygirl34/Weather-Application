/*
Project:Weather application
Name:Selvapriyanka S
College name:Vivekanandha college of engineering for women.

Method used:
* switch case

Data used:
Email id
Password
location
*/

#include<iostream>
using namespace std;
int
main ()
{
  int choice;
  string Email;
  int Password;
  char Location;
  cout << "***WELCOME TO CATTYS WEATHER REPORT***";
  cout << "\nEnter your Email id:";
  cin >> Email;
  cout << "\nEnter your Password:";
  cin >> Password;
  cout << "\nEnter your Location:";
  cin >> Location; 
  
  cout << "\nEnter your choice:"<<endl;
  cin >> choice;
  switch (choice)
 {   
    case 1:
    
      cout << "\nToday's report";
      cout << "\n    Temperature is 25celsius";
      cout << "\n    Today is Rainy";
      break;
    
    case 2:
    
      cout << "\nTomorrow's report";
      cout << "\n    Temperature is 85celsius";
      cout << "\n    Today is Sunny";
      break;
    
    case 3:
    
      cout << "\nYesterday's report";
      cout << "\n    Temperature is -15celsius";
      cout << "\n    Today is Snowy";
      break;
    
    case 4:
    
      cout << "\nThe day after tomorrow report";
      cout << "\n    Temperature is 45celsius";
      cout << "\n    Today is Cloudy";
      break;
    
    case 5:
    
      cout << "\nMonday report";
      cout << "\n    Temperature is 55celsius";
      cout << "\n    Today is Cloudy Rain";
      break; 
    
    case 6:
    
       cout<<"\nTuesday report";
       cout<<"\n    Temperature is 40celsius";
       cout<<"\n    Today is Thunderstorm";
       break;
    
    case 7:
    
      cout << "\nWednesady report";
      cout << "\n    Temperature is 39celsius";
      cout << "\n    Today is Damp";
      break;
    
    case 8:
    
      cout << "\nThursday report";
      cout << "\n    Temperature is 30celsius";
      cout << "\n    Today is Overcast";
      break;
    
    case 9:
    
      cout << "\nFriday report";
      cout << "\n    Temperature is 90celsius";
      cout << "\n    Today is Drought";
      break;
    
    case 10:
    
      cout << "\nWeekly report";
      cout << "\n    Temperature is 90celsius";
      cout << "\n    Today is Drizzle";
      break;
    
    default:
        
            cout<<"**Choose some other period**";
            break;
}  
    return 0;
}
