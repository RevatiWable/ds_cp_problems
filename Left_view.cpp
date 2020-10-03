/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node* left;
    Node* right;
};

void leftView(struct Node *root);


Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


Node* buildTree(string str)
{

    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    Node* root = newNode(stoi(ip[0]));

    
    queue<Node*> queue;
    queue.push(root);

    
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        
        Node* currNode = queue.front();
        queue.pop();

        
        string currVal = ip[i];

       
        if(currVal != "N") {

            
            currNode->left = newNode(stoi(currVal));

            queue.push(currNode->left);
        }

       
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        
        if(currVal != "N") {

            
            currNode->right = newNode(stoi(currVal));

            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        leftView(root);
        cout << endl;
    }
    return 0;
}


void leftView(Node *root)
{
   if(root==NULL)
   return;
   queue<Node*>q;
   q.push(root);
   q.push(NULL);
   while(q.size()>1){
       Node*temp=q.front();
       if(temp){
       cout<<temp->data<<" ";
       while(q.front()){
           if(temp->left)
           q.push(temp->left);
           if(temp->right)
           q.push(temp->right);
           q.pop();
           temp=q.front();
       }
       q.push(NULL);
       }
       q.pop();
       
   }
}