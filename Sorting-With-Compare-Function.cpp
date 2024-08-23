#include <bits/stdc++.h>
using namespace std;

bool compare_odd_first(int a, int b)
{
    if (a % 2 != b % 2) // check if (a is odd and b is even) or (a is even and b is odd)
    {
        return a % 2 == 1; // odd numbers come first
    }
    return a < b; // if both are odd or both are even then sort them normally
}
//!============================================================================
bool compare_odd_first_greater(int a, int b)
{
    if (a % 2 != b % 2) // checks if one number is odd and the other is even
    {
        // if a is odd , the function returns true,
        // meaning [a] come before [b] in the sorted order.
        return a % 2 == 1;
    }
    // If a is even, it returns false,
    // meaning [b] comes before [a] in the sorted order.
    return a > b;
}
//!============================================================================
bool compare_even_first(int a, int b)
{
    if (a % 2 == b % 2) // checks if both numbers are odd or both are even
    {
        return a < b; // sort them normally from smaller to greater
    }
    return a % 2 == 0; // even numbers come first
}
//!============================================================================
bool compare_even_first_greater(int a, int b)
{
    if (a % 2 == b % 2) // checks if both numbers are odd or both are even
    {
        return a > b; // sort them from greater to smaller
    }
    return a % 2 == 0; // even numbers come first
}

int main()
{

    vector<int> vec1 = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; //* 1 2 3 4 5 6 7 8 9 10
    vector<int> vec2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //* 10 9 8 7 6 5 4 3 2 1
    vector<int> vec3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //! 2 4 6 8 10 1 3 5 7 9

    cout << "Sort From Samller to Greater : " << endl;
    sort(vec1.begin(), vec1.end());

    for (auto it : vec1)
    {
        cout << it << " ";
    }
    cout << "\n=======================================" << endl;

    cout << "Sort From Greater to Small Sort : " << endl;
    sort(vec2.begin(), vec2.end(), greater<int>());

    for (auto it : vec2)
    {
        cout << it << " ";
    }

    cout << "\n=======================================" << endl;

    cout << "Sort Odd First : " << endl;
    sort(vec3.begin(), vec3.end(), compare_odd_first);

    for (auto it : vec3)
    {
        cout << it << " ";
    }

    cout << "\n=======================================" << endl;

    cout << "Sort Even First : " << endl;
    sort(vec3.begin(), vec3.end(), compare_even_first);

    for (auto it : vec3)
    {
        cout << it << " ";
    }

    cout << "\n=======================================" << endl;

    cout << "Sort Odd First Greater : " << endl;
    sort(vec3.begin(), vec3.end(), compare_odd_first_greater);

    for (auto it : vec3)
    {
        cout << it << " ";
    }

    cout << "\n=======================================" << endl;

    cout << "Sort Even First Greater : " << endl;
    sort(vec3.begin(), vec3.end(), compare_even_first_greater);

    for (auto it : vec3)
    {
        cout << it << " ";
    }

    return 0;
}