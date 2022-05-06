#include<iostream>
#include<ios>
#include<limits>
#include<windows.h>
#include<string>
#include<fstream>
using namespace std;

class Management
{
    public:
    string fname,lname,email,address,uid,phone,dob,stream;
    int i,j;

    Management()
    {
        int choice;
        cout<<"\t\t\tWelcome to Chitkara University Manager!!!\n\n\n";
        cout<<"1.Student's Data"<<endl;
        cout<<"2.Teacher's Data"<<endl;
        cout<<"3.Exit Machine"<<endl;
        cin>>choice;
         system("cls");
        switch(choice)
        {
        case 1:
            Student_Data();
            break;

        case 2:
            Teacher_Data();
            break;
        case 3:
            break;
       }
    }

    void Student_Data()
    {
        while(true)
            {
                char choice;
                cout<<"\t\t\tSTUDENTS INFORMATION \n\n\n";
                cout<<"Enter your choice: "<<endl;
                cout<<"1.Create new entry\n";
                cout<<"2.Find and display entry\n";
                cout<<"3.Jump to main\n";
                cin>>choice;
                switch(choice)
                {
                case '1':
                    {
                        ofstream S1("student_data.txt",ios::app);
                        for(  i=0;(choice!='N');i++)
                        {
                            if((choice=='y')||(choice=='Y')||(choice=='1'))
                            {
                                cout<<"Enter UNIVERSITY ID : ";
                                cin>>uid;
                                cout<<"Enter First Name : ";
                                cin>>fname;
                                cout<<"Enter Last Name : ";
                                cin>>lname;
                                cout<<"Enter Phone Number : ";
                                cin>>phone;
                                cout<<"Enter Stream : ";
                                cin>>stream;
                                cout<<"Enter Date Of Birth ";
                                cin>>dob;
                                S1<<uid<<endl<<fname<<endl<<lname<<endl<<phone<<endl<<stream<<endl<<dob<<endl<<endl;
                                cout<<"Do you want to enter more data: ";
                                cout<<"Press Y for Continue and N to Finish:  ";
                                cin>>choice;
                            }
                        }
                        S1.close();
                    }
                continue;
                case '2':
                    {
                        ifstream S2("student_data.txt");
                        cout<<"Enter UNIVERSITY ID to Search Data For : ";
                        string find;
                        cin>>find;
                        cout<<endl;
                        int notFound = 0;
                        for(j=0;(j<i)||(!S2.eof());j++)
                        {
                        getline(S2,uid);
                        if(uid==find)
                        {
                         notFound = 1;
                         getline(S2,fname);
                         cout<<"First Name: "<<fname<<endl;
                        getline(S2,lname);
                         cout<<"Last Name: "<<lname<<endl;
                         //getline(S2,uid);
                         cout<<"UNIVERSITY ID. : "<<uid<<endl;
                         getline(S2,phone);
                         cout<<"Phone Number: "<<phone<<endl;
                         getline(S2,stream);
                         cout<<"Stream: "<<stream<<endl;
                         getline(S2,dob);
                         cout<<"Date Of Birth: "<<dob<<endl;
                        }

                        }

                        if(notFound == 0)
                            {
                            cout<<"No Record Found"<<endl;
                            }
                            S2.close();
                    }
                    continue;
                case '3':
                    system("cls");
                    Management();
                }
                break;
            }
    }

    void Teacher_Data()
    {
        while(true)
            {
                string qual,exp,sub;
                char choice;
                cout<<"\t\t\tTEACHERS INFORMATION \n\n\n";
                cout<<"Enter your choice: "<<endl;
                cout<<"1.Create new entry\n";
                cout<<"2.Find and display entry\n";
                cout<<"3.Jump to main\n";
                cin>>choice;
                switch(choice)
                {
                case '1':
                    {
                        ofstream T1("teacher_data.txt",ios::app);
                        for(  i=0;choice!='N';i++)
                        {
                            if((choice=='y')||(choice=='Y')||(choice=='1'))
                            {
                                cout<<"Enter UNIVERSITY ID : ";
                                cin>>uid;
                                cout<<"Enter First Name : ";
                                cin>>fname;
                                cout<<"Enter Last Name : ";
                                cin>>lname;
                                cout<<"Enter Phone Number : ";
                                cin>>phone;
                                cout<<"Enter Date Of Birth ";
                                cin>>dob;
                                cout<<"Enter QUALIFICATIONS : ";
                                cin>>qual;
                                cout<<"Enter Experience(IN YEARS) : ";
                                cin>>exp;
                                cout<<"Which Subject Teacher : ";
                                cin>>sub;
                                T1<<uid<<endl<<fname<<endl<<lname<<endl<<phone<<endl<<dob<<endl<<qual<<endl<<exp<<endl<<sub<<endl<<endl;
                                cout<<"Do you want to enter more data: ";
                                cout<<"Press Y for Continue and N to Finish:  ";
                                cin>>choice;
                            }
                        }
                        T1.close();
                    }
                continue;
                case '2':
                    {
                        ifstream T2("teacher_data.txt");
                        cout<<"Enter University ID to Search Data For : ";
                        string find;
                        cin>>find;
                        cout<<endl;
                        int notFound = 0;
                        for(j=0;(j<i)||(!T2.eof());j++)
                        {

                        getline(T2,uid);

                        if(uid==find)
                        {
                         notFound = 1;
                         getline(T2,fname);
                         cout<<"First Name: "<<fname<<endl;
                         getline(T2,lname);
                         cout<<"Last Name: "<<lname<<endl;
                         cout<<"UNIVERSITY ID : "<<uid<<endl;
                         getline(T2,phone);
                         cout<<"Phone Number : "<<phone<<endl;
                         getline(T2,dob);
                         cout<<"Date Of Birth: "<<dob<<endl;
                         getline(T2,qual);
                         cout<<"Qualifications : "<<qual<<endl;
                         getline(T2,exp);
                         cout<<"Experience : "<<exp<<endl;
                         getline(T2,sub);
                         cout<<"Sub Teacher: "<<sub<<endl;
                        }

                        }

                        if(notFound == 0)
                            {
                            cout<<"No Record Found"<<endl;
                            }
                            T2.close();
                    }
                    continue;
                case '3':
                    system("cls");
                    Management();
                }
                break;
            }
    }
};

int main()
{
    Management obj;
    //obj.Main_Menu();
}
