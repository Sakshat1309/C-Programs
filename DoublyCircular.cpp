#include<iostream>
using namespace std;
class dnode
{
  public:
  int info;
  dnode *llink;
  dnode *rlink;
  dnode(int data)
  {
    info= data;
    llink= NULL;
    rlink= NULL;
  }
};
 dnode* ins(dnode *start)
    {
        int data;
        dnode *curr= start;
        cout<<"Enter an element:";
        cin>>data;
        dnode *temp= new dnode(data);
        if(start==NULL)
        {
            start= temp;
            start->llink=start;
            start->rlink=start;
            return start;
        }
        else if(data<=curr->info){
             while(curr->rlink!=start)
            {
                curr= curr->rlink;
            }
            dnode* temp2 = curr->rlink;
            curr->rlink->llink=temp;
            curr->rlink= temp;
            temp->llink= curr;
            temp->rlink= temp2;
            start=temp;
            return start;
        }
        else{ 
           while(curr->rlink!=start && curr->rlink->info<data)
            {
                curr= curr->rlink;
            }
            dnode* temp2 = curr->rlink;
            curr->rlink->llink=temp;
            curr->rlink= temp;
            temp->llink= curr;
            temp->rlink= temp2;
            return start;
        }
    }
    void display(dnode *start)
    {
    
        dnode *curr= start;
        
        if(curr==NULL)
        {
          cout<<"The list is empty.\n";
          return;
        }
        else
        {
            cout<<"The elements in the linked list are:";
        {
            cout<<"<-"<<(curr->info);
        }
        }
        while(curr->rlink!=start)
        {
           cout<<"->"<<"<-"<<(curr->rlink->info);
           curr= curr->rlink;
        }

        cout<<"->"<<"<-"<<endl;
    }
    dnode* deleteNode(dnode* start,int pos){
        dnode* curr = start;
         if(start==NULL ){
             cout<<"nothing to delete"<<endl;
             return start;
         }
         if(pos==0){
            pos=10;
            for(int i=0;i<pos-1;i++){
                  curr=curr->rlink;
             }
             dnode* todelete = curr->rlink;
             curr->rlink=curr->rlink->rlink;
             curr->rlink->llink=curr;
             delete todelete;
             start=curr->rlink;
             return start;
         }
         else{
             for(int i=0;i<pos-1;i++){
                  curr=curr->rlink;
             }
             dnode* todelete = curr->rlink;
             curr->rlink=curr->rlink->rlink;
             curr->rlink->llink=curr;
             delete todelete;
             return start;
         }
    }
    void deleteAlt(dnode* start){
        dnode* curr = start;
        int count=0;
        while(curr->rlink!=start){     
            count++;                   
            curr=curr->rlink;
        }
        count++;                    
        for(int i=1;i<=(count/2);i++){  
           start= deleteNode(start,i);
        }
       
    }


int main(){
     dnode *start= NULL;
   start=ins(start);
   start=ins(start);
   start=ins(start);
   start=ins(start);
   start=ins(start);
   start=ins(start);
   start=ins(start);
   start=ins(start);
   start=ins(start);
   start=ins(start);
   start=ins(start);
   display(start);
   start=deleteNode(start,0);
    deleteAlt(start);
   display(start);

}