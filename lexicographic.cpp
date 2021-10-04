#include<bits/stdc++.h>
using namespace std;
#define CHAR 256 
int fact(int n)
{
    return(n<=1)? 1: n*(n-1); 
}

void populateandincreasecount(int* count , int* str)
{
    int i;
     for(i=0 ;str[i];++i)
     ++count[str[i]];

     for(i=0 ; i<CHAR;++i)
     count[i] += count[i-1];
}

void updatecount(int *count ,char ch )
{
    int i;
    for(i=0 ;i<CHAR;++i)
    --count[i];
}

int findrank()