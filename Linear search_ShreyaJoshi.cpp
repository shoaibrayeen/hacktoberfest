#include <iostream>
using namespace std;

template <typename T> void Linear_search(T *array,int size,T x ) {
	int c = 0; 
	for(int i=0; i<size; i++) {
		
		c++;
		if(x==array[i]) {
			cout<<x<<" is found at "<<i<<"th index "<<endl;
			cout<<"No of comparisions : "<<c<<endl;
			return;
		}	
	}
	cout<<x<<" is not found !!!"<<endl;
	cout<<"No of comparisions : "<<c<<endl;
	return;
}	

int main() {
	
	cout<<"**** Linear search *****"<<endl<<endl;
	
	int size;
	cout<<"Enter the size of array : "<<endl;
	cin>>size;
	
	int *array = new int[size];
	cout<<"Enter the elements of array : "<<endl;
	for(int i=0; i<size; i++) {
		cin>>array[i];
	}

	int choice=1;
	while(choice) {
		
		cout<<"\nEnter number for search "<<endl;
	    int num;
	    cin>>num;
	    
	    Linear_search(array,size,num);
	    
	    cout<<"Do you want to continue ? yes/no = 0/1 ";
	    cin>>choice;
	}
}


