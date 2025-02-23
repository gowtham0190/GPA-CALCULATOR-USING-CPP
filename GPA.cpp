#include <iostream>
#include <stdlib.h>

using namespace std;

void calculateGPA();
void calculateCGPA();

int main()
{
    int input;
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"                    GPA & CGPA Calculator (Programmed by Gowtham Davuluri)             "<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
    cout<<"            MENU:"<<endl;
    cout<<"                   1. Calculate SGPA (Semester Grade Point Average)"<<endl;
    cout<<"                   2. Calculate CGPA (Cummulative Grade Point Average)"<<endl;
    cout<<"                   3. Exit Application"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    mycontrol:
    cout<<"Enter your choice: ";
    cin>>input;
    switch(input)
    {
        case 1:
                calculateGPA();
                break;

        case 2:
                calculateCGPA();
                break;
        case 3:
                exit(0);
                break;
        default:
            cout<<"Please give a proper input \n"<<endl;
            goto mycontrol;
            break;
    }
}

void calculateGPA()
{
    int q;
    system("cls");
    cout<<"-------------- SGPA Calculation -----------------"<<endl;
    cout<<" How many subject's points do you want to calculate? : ";
    cin>>q;

    float credit [q];
    float point [q];

    cout<<endl;
    for(int i=0;i<q;i++)
    {
        cout<<"Enter the credit for the subject "<<i+1<<": ";
        cin>>credit[i];
        cout<<endl;
        cout<<"Enter the point of the subject "<<i+1<<": ";
        cin>>point[i];
        cout<<"-----------------------------------\n\n"<<endl;
    }

    float sum=0;
    float tot;
    for(int j=0;j<q;j++)
    {
        tot=credit[j]*point[j];
        sum=sum+tot;
    }

    float totCr=0;
    for(int k=0;k<q;k++)
    {
        totCr=totCr+credit[k];
    }

    cout<<"\n\n\nTotal Points: "<<sum<<" . Total Credits: "<<totCr<<" .Total GPA: "<<sum/totCr<<" ."<<endl;


    mycontrol:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                calculateGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(0);

        default:
              cout<<"\n\nPlease Enter a proper input!"<<endl;
              goto mycontrol;
    }
}
void calculateCGPA()
{
    int l;
    cout<<"-------------- CGPA Calculating -----------------\n\n"<<endl;
    cout<<"How many semester results do you want input? :";
    cin>>l;
    cout<<"\n\n"<<endl;
    float semrs[l],cre[l];
    int i;

    for(i=0;i<l;i++)
    {
        cout<<" Enter Semester "<<i+1<<" Result(GPA): ";
        cin>>semrs[i];
        cout<<" Enter Semester "<<i+1<<" Total Credits: ";
        cin>>cre[i];
        cout<<"\n"<<endl;
    }

    float semtot=0,cretot=0;
    for(int j=0;j<l;j++)
    {
        semtot=semtot+(semrs[j]*cre[j]);
        cretot+=cre[j];
    }

    cout<<"******** Your CGPA is "<<semtot/cretot<<" **********"<<endl;


    mycontrol:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                calculateCGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(0);

        default:
              cout<<"\n\nPlease Enter a proper input!"<<endl;
              goto mycontrol;
    }

}
