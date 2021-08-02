
#include<bits/stdc++.h>
using namespace std;



struct node{
    int val;
    int arrayNo;
    int currIndx;
    node(int val_,int arrayNo_,int currIndx_){
        val=val_;
        arrayNo=arrayNo_;
        currIndx=currIndx_;
    }
};
typedef struct node Node;

struct cmp{
   bool operator()(Node const& a,Node const& b){
    return a.arrayNo>b.arrayNo;
    } 
};



int main(){
   Node temp = Node(1,2,3);
   Node temp1 = Node(1,6,3);
   Node temp2 = Node(1,1,3);
   Node temp3 = Node(1,3,3);
   Node temp4 = Node(1,8,3);
   Node temp5 = Node(1,3,3);
   Node temp6 = Node(1,8,3);
   Node temp7 = Node(1,1,3);
   Node temp8 = Node(1,7,3);

   priority_queue<Node,vector<Node>,cmp> pq;

   pq.push(temp);
    pq.push(temp1);
   pq.push(temp2);
   pq.push(temp3);
   pq.push(temp4);
   pq.push(temp5);
   pq.push(temp6);
   pq.push(temp7);
   pq.push(temp8);

   while(!pq.empty()){
    Node n =  pq.top();
    pq.pop();
    cout<<n.val<<" "<<n.arrayNo<<" "<<n.currIndx<<endl;
   }
     
}
