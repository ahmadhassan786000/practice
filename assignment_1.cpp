#include <iostream>
#include <string>
using namespace std;


void add_product(int* arr,int size){
    cout<<"\nEnter the number of products do you want to add: ";
    cin>>size;
    arr=new int[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the product_"<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"your prooducts added successfully.";
}

void remove_product(int* arr,int size){
    int delete_product,j=0,copy_size=0;
    int *copy_arr;
    cout<<"\nEnter the product do you want to delete: ";
    cin>>delete_product;
    for(int i=0;i<size;i++){
        if(delete_product==arr[i])
        continue;
        else{
            copy_arr=new int[++copy_size];
            copy_arr[j]=arr[i];
        }
    }
    delete[] arr;
}
int main(){
    int size;
    int *arr;
    add_product(arr,size);
    remove_product(arr,size);
    return 0;
}