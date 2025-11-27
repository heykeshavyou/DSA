#include <iostream>
using namespace std;
int main()
{
    // Pattern
    //*
    //**
    //***
    //****
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // Pattern
    //  1
    //  2 2
    //  3 3 3
    //  4 4 4 4
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    // Pattern
    //  1
    //  1 2
    //  1 2 3
    //  1 2 3 4
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    // Reverse Triangle
    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        while (temp != 0)
        {
            cout << temp << " ";
            temp--;
        }
        cout << endl;
    }
    cout << "Floyd's Triangle Pattern" << endl;
    // Floyd's Triangle Pattern
    int temp = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << temp << " ";
            temp++;
        }
        cout << endl;
    }
    cout << "Inverted Triangle Pattern" << endl;
    // Inverted Triangle Pattern
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = n; j >= i; j--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    // Pyramid Pattern
    cout << "Pyramid Pattern" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }

        cout << endl;
    }
    // Hollow Daimond Pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        cout << "*";

        for (int j = i; j > 0; j--)
        {
            cout << "  ";
        }
        if (i != 0)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        cout<< "*";

        for (int j = i; j > 0; j--)
        {
            cout << "  ";
        }
        if(i!=0){
             cout << "*";
        }
        cout << endl;;
    }
    //Butterfly Pattern
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=n;j>i+1;j--){
            cout<<"  ";
        }
         for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=n;j>i;j--){
            cout<<"  ";
        }
         for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
