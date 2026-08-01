#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    
    vector<std::string> tasks;
    cout<<"Welcome to Task List Tool!"<<endl;
    cout<<endl;
    cout<<"Menu Options:"<<endl;
    cout<<"1. Add Task"<<endl;
    cout<<"2. View Tasks"<<endl;
    cout<<"3. Quit"<<endl;
    cout<<endl;
    cout<<"Task list system initialized and ready!"<<endl;
    
    while ( true ) {
        cout<<"Type the option number you want to enter here!";
        int a;
        cin>>a;
        if ( a == 1) {
            cin.ignore();
            cout<<"type the task you want to add here!"<<endl;
            string naa;
      std::getline(std::cin,naa);
    tasks.push_back(naa);
     cout<<"Choose an option: Task \""<<naa<<"\"  added successfully!"<<endl;
        cout<<"Total tasks: "<<tasks.size()<<endl;
        } else if ( a == 2) {
            if ( tasks.size() == 0) {
                cout<<"Choose an option: No tasks available."<<endl;
            } else {
                cout<<"Your Tasks: "<<endl;
                for(int i = 0; i < tasks.size();i++) {
                    cout<<i+1<<". "<<tasks[i]<<endl;

                } cout<<"Total tasks: "<<tasks.size()<<endl;
            } 
        } else if ( a == 3) {
            cout<<"type the task number you want to remove here!"<<endl;
           int b;
    cin>>b;
    
    if ( b > tasks.size() || b == 0) {
        cout<<"Error: Invalid task number. Please enter a number between 1 and "<<tasks.size()<<"."<<endl;
    } else  {
    cout<<"Task \""<<tasks[b-1]<<"\" removed successfully!"<<endl;
    auto it = std::find(tasks.begin(), tasks.end(),tasks[b-1]);
    if ( it != tasks.end()) {
        tasks.erase(it);
    }  if ( tasks.size() == 0) {
        cout<<"No tasks remaining"<<endl;
    }   else {
        cout<<"Remaining Tasks:"<<endl;
        for ( int i = 0;i < tasks.size();i++) {
            cout<<i+1<<". "<<tasks[i]<<endl;
        }
    } 
    
    } 
        } else  {
            string a = "nulll";
        }
      if ( a == 4) {
       cout<<"Choose an option: Thank you for using Task List Tool!"<<endl;
       break;
      }

    }
        
    
    return 0;
}
