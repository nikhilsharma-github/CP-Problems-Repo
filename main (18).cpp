/* JYOTSHNA YAPARLA - S00405761
CSCI 5000 HW6
02/22/2022 */

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include<algorithm>
// #include <bits/stdc++.h> 
#include<vector>
using namespace std;
void average(int grades[][6]) //function declaration for calculating average of grades
{
    cout << "-----Average Student Scores-----"<<endl;
    cout <<"HW1"<< setw(8) <<"HW2"<< setw(8) <<"HW3"<< setw(8) <<"HW4"<< setw(8) <<"Test1"<< setw(8) <<"Test2"<<endl;
    float avg[6];
    for(int j=0;j<6;j++){
        avg[j]=0;
    }
    for(int i=0;i<20;i++){
        for(int j=0;j<6;j++){
            avg[j]+=grades[i][j]; //adding the grades by taking input from grades array
        }
    }
    for(int i=0;i<6;i++){
        //  cout << avg[i] << " ";
        avg[i]=avg[i]/20; //calculates the average
        cout << avg[i] << setw(3) << " ";
    }
    cout << endl;
}
void minmax(int grades[][6]) //function declaration for printing minimum and maximum grades
{
    cout<<"-----Min/Max Scores-----"<<endl;
    cout <<"HW1"<< setw(7) <<"HW2"<< setw(7) <<"HW3"<< setw(7) <<"HW4"<< setw(7) <<"Test1"<< setw(7) <<"Test2"<<endl;
    int mini[6];
    int maxi[6];
    for(int j=0;j<6;j++){
        mini[j]=1000;
        maxi[j]=-1;
    }
    for(int i=0;i<20;i++){
        for(int j=0;j<6;j++){
            // avg[j]+=grades[i][j];
            mini[j]=min(mini[j],grades[i][j]); //searching grade minimum grade
            maxi[j]=max(maxi[j],grades[i][j]); //searching for maximum grade
        }
    }
    for(int i=0;i<6;i++){
       
        cout << mini[i] << setw(5) << " "; //printing the minimum value
    }
    cout << endl;
    for(int i=0;i<6;i++){
       
        cout << maxi[i] << setw(5)<< " "; //printing the maximum value
    }
    cout << endl;
} 
void grade(int grades[][6],int id) //function declaration for calculating the average weight of student taking ID as input
{
    float weight= (0.1*grades[id][0]) + (0.1*grades[id][1]) + (0.1*grades[id][2]) + (0.1*grades[id][3]) + (0.15*grades[id][4]) + (0.15*grades[id][5]); //formula for calculating the average weight score
    cout << weight << endl;
}
void minFinal(int grades[][6],int id) //function declaration for calculating the minimum final test score taking ID as input
{
    float final=(80-((0.1*grades[id][0]) + (0.1*grades[id][1]) + (0.1*grades[id][2]) + (0.1*grades[id][3]) + (0.15*grades[id][4]) + (0.15*grades[id][5])))/0.3; //formula for calculating the minimum final score
    cout << final << endl;
}
void interactiveShell( int grades[][6] ,vector<int> rollnos,vector<string> names) //function declaration for printing the menu
{
    cout << "Student"<< setw(15) <<"HW1"<< setw(10) <<"HW2"<< setw(10) <<"HW3"<< setw(10) <<"HW4"<< setw(10) <<"Test1"<< setw(10) <<"Test2"<< setw(15) <<"Final"<<endl;
    for(int i=0;i<20;i++)
    {
        cout<< rollnos[i] << " ";
            cout<< names[i]<< setw(9) <<" ";
            for(int j=0;j<6;j++)
            {
                cout <<grades[i][j]<< setw(9) <<" ";
            }
            cout << endl;
            
        }
    int n;
    while (true) //while statement for opting the menu choices and doing the procedure
    {
        cout << "enter an option "<< endl ;
        cout << "1 - " << "Calculate Average Scores" << endl;
        cout << "2 - " <<"Calculate mini/maxi Scores" << endl;
        cout << "3 - " <<"Calculate Current Average of a Student" << endl;
        cout << "4 - " <<"Find mini Final Test Score for a 80(B)" << endl;
        cout << "0 - " << "exiting the application " << endl;
        cin >>n ;
        
        if(n==1) //for menu option 1
        {
            // cout << "Calculate Average Scores" << endl;
            average(grades); //function call

        }else if(n==2) //for menu option 2
        {
            // cout << "Calculate mini/maxi Scores" << endl;
            minmax(grades); //function call
        }
        else if(n==3) //for menu option 3
        {
            
            // cout << "Calculate Current Average of a Student" << endl;
            cout<<  "Enter the student ID:" ;
            int id;
            cin >> id; //reads the ID
            int index=-1;
            for(int i=0;i<rollnos.size();i++){
                if (rollnos[i]==id){
                    index=i;
                }
            }
            if(index==-1){
                cout << "Sorry id is wrong " << endl;
                continue;
            }
            // cout << index << endl;
            grade(grades,index);
        }
        else if(n==4) //for menu option 4
        {
            // cout << "Find mini Final Test Score for a 80(B)" << endl;
            cout<<  "Enter the student ID:" ;
            int id;
            cin >> id;
            int index=-1;
            for(int i=0;i<rollnos.size();i++){
                if (rollnos[i]==id){
                    index=i;
                }
            }
            if(index==-1){
                cout << "Sorry id is wrong " << endl;
                continue;
            }
            // cout << index << endl;
            minFinal(grades,index);
        }
        else if(n==0) //for menu option 0 this will exit the console
        {
            cout << "exiting the application .......... " << endl;
            break;
        }
        else{
            cout << "Enter valid input Again" << endl;
        }
    }
}


int main()
{
    ifstream inFile;
    inFile.open("grades20.txt");
    vector<int> rollnos;
    vector<string> names;
    string name;
    int hw1,hw2,hw3,hw4,test1,test2,rolno;
    
    int grades[20][6]; //2-D array
    int i=0;
    while (inFile >>rolno >>name >> hw1 >> hw2 >> hw3 >> hw4 >> test1 >> test2) //reading the file contents
    {
        grades[i][0]=hw1; //array for each column
        grades[i][1]=hw2;
        grades[i][2]=hw3;
        grades[i][3]=hw4;
        grades[i][4]=test1;
        grades[i][5]=test2;
        names.push_back(name); //Adds a new element at the end of the vector, after its present last element(vector header file)
        rollnos.push_back(rolno);
        i++;
    }
    interactiveShell(grades,rollnos,names); //function call
}