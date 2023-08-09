#include<iostream>
#include<stack>
using namespace std;

void test_stack01(){
    stack<int> st;
    st.push(11);
    st.push(22);
    st.push(33);
    st.push(44);
    st.push(55);

    cout<<"size of stack: "<<st.size()<<endl;
    cout<<"empty of capacity of stack: "<<st.empty()<<endl;
    cout<<"-------------------------------------------------"<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<"NULL"<<endl;
    cout<<"-------------------------------------------------"<<endl;

    cout<<"size of stack: "<<st.size()<<endl;
    cout<<"empty of capacity of stack: "<<st.empty()<<endl;
}
int main(){
    test_stack01();
    return 0;
}