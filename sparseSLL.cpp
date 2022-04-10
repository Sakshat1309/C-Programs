#include<iostream>
using namespace std;
class node
{
    public:
    int row;
    int col;
    int val;
    node *next;
    node(int data, int r, int c)
    {
        row= r;
        col= c;
        val = data;
        next = NULL;
    }
};

void ins_end(node* &start, int data, int r, int c)
    {
        node *curr= start;
        node *temp= new node(data, r, c);
        if(start==NULL)
        {
            start= temp;
            return ;
        }
            while(curr->next!=NULL)
            {
                curr= curr->next;
            }
            curr->next= temp;
    }

void display(node* start)
{
    node *curr= start;
    cout<<"The elements of the sparse matrix in SLL are: "<<endl;
    while(curr!=NULL)
    {
        cout<<"("<<curr->row<<", "<<curr->col<<", "<<curr->val<<")"<<"-->";
        curr= curr->next;
    }
    cout<<"NULL";
}
node* transpose(int arr[20][20],int M,int N,int count){
    node* nHead = new node(count,N,M);

    for (int i=0; i<N; i++)
 {
  for (int j=0; j<M; j++)
  {
    cout<<arr[j][i]<<" ";
  }
  cout<<endl;
 }
 for (int i=0; i<N; i++)
 {
  for (int j=0; j<M; j++)
  {
    if(arr[j][i]!=0)
    {
    ins_end(nHead, arr[j][i], i, j);
    }
  }
 }
  return nHead;
}
int main()
{
 node *start = NULL;
 int MAT[20][20], M, N, i, j,count=0;
 cout<<"Enter the number of rows:\n";
 cin>>M;
 cout<<"Enter the number of columns:\n";
 cin>>N;
 cout<<"Enter the elements in the matrix:\n";

 for (i=0; i<M; i++)
 {
  for (j=0; j<N; j++)
  {
    cin>>MAT[i][j];
    if(MAT[i][j]!=0){
        count++;
    }
  }
 }
 ins_end(start,count,M,N);
 for (i=0; i<M; i++)
 {
  for (j=0; j<N; j++)
  {
      cout<<MAT[i][j]<<" ";
    if(MAT[i][j]!=0)
    {
    ins_end(start, MAT[i][j], i, j);
    }
  }
  cout<<endl;
 }
 display(start);

 cout<<"\nAfter transpose"<<endl;
 start=transpose(MAT,M,N,count);

  display(start);

}