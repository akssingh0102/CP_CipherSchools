#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

#define ll                  long long int 
#define llmin               -1e18
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
#define take(a,n)           vector <int> a; for(int i=0;i<n;i++){int aa; cin>>aa; a.pb(aa);}
#define vll                 vector<ll> 
#define full(a)             (a.begin(),a.end())
#define vc                  vector<char>
#define iz(n)               int n; cin>>n;
#define iz2(n,m)             int n,m; cin>>n>>m;
#define mii                 map<int,int>
#define setbits(x)          __builtin_popcountll(x)
#define zerobits(x)         __builtin_ctzll(x)    //zeros before first 1
#define com                 int t; cin>>t; while(t--)
#define forn(n)             for(int i=0;i<n;i++)
#define fo(x,y)             for(int i=x;i<y;i++)
#define pq                  priority_queue <int, vector<int>, greater<int> >

struct Node{
    int data;
    Node* next;
    Node(){
        Node(0);
    }
    Node(int x){
        data=x;
        next=NULL;
    }
};

void addAtEnd(Node **head,int x){
    Node *curr=*head;
    Node *temp=new Node(x);
    if(curr==NULL){
        *head=temp;
    }
    else{
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp;
    }
}
void addAtFront(Node **head,int x){
    Node *temp=new Node(x);
    if(*head==NULL){
        *head=temp;
    }
    else{
        temp->next=*head;
        *head=temp;
    }

}

void printAll(Node **head){
    Node *curr=*head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

bool idEmpty(Node **head){
    if(*head==NULL){
        return true;
    }
    else{
        return false;
    }
}

Node *addTwoNumber(Node *first,Node *second){
    Node dummy;
    Node *curr=&dummy;
    int sum=0;
    int carry=0;

    while(first!=NULL || second!=NULL){
        if(first==NULL){
            if(second)
            sum=second->data;
        }
        else if(second==NULL){
            if(first)
            sum=first->data;
        }
        else{
            sum=(first->data)+(second->data);
        }

        sum+=carry;
        curr->next=new Node(sum%10);
        curr=curr->next;
        carry=sum/10;

        if(first!=NULL){
            first=first->next;
        }
        if(second!=NULL){
            second=second->next;
        }
    }
    if(carry){
        curr->next=new Node(carry);
    }

    curr=&dummy;
    return curr->next;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node *head=NULL;
    Node *first,*second;

    addAtEnd(&first,1);
    addAtEnd(&first,2);
    addAtEnd(&first,3);
    // printAll(&first);

    addAtEnd(&second,7);
    addAtEnd(&second,8);
    addAtEnd(&second,9);
    // printAll(&second);

    Node *sum=addTwoNumber(first,second);

    printAll(&sum);


    



    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    
    
    return 0;
}