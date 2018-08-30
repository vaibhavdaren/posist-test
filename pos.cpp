#include <bits/stdc++.h>
#include <iostream>
#include <ctime>

using namespace std;
static int nn =0;
string hashvalfun(string name,float value,int id)
{
    stringstream stream,ss;
	stream << fixed << setprecision(2) << value;
	string valinstr = stream.str();
    ss << id;
    string idstr = ss.str();
	string hash=idstr+valinstr+name;
    return hash;
}
class user
{
    int userid;
	string uname;
    string upassword;
    public:
    void adduser()
    {
        cout<<"Enter User Name :";
        cin>>uname;
        cout<<"Enter Id : ";
        cin>>userid;
        cout<<"Enter user password : ";
        cin>>upassword;
   		cout<<endl;

    }
    bool checkpassword(string p)
    {
        return p==upassword;
    }
    void dun()
    {
        cout<<uname<<" ";
    }
    string urname()
    {
        return uname;
    }
    int uid()
    {
        return userid;
    }

};
struct data
{
    int ownerid;
    float value;
    string ownername;
    string hashval;
};
struct node
{
       time_t timestamp = time(0);
       struct data d;
       int nodenumber;
       string nodeid;
       node *referencenodeid;
       set<node *> childreferencenodeid;
       node *genisisnodeid;
       string hashval;
};
node* createnode()
    {return (node*)malloc(sizeof(node));}
void insertnode(user u,float val)
{
    node *temp=createnode();
    temp->timestamp=time(0);
    temp->d.ownerid=u.uid();
    temp->d.ownername=u.urname();
    cout<<"enter value float";
    cin>>temp->d.value;
    temp->d.hashval=hashvalfun(temp->d.ownername,temp->d.value,temp->d.ownerid);
    temp->nodenumber=nn++;

}
int main()
{
  	user su;
  	su.adduser();
    cout<<"Enter Super User Password";
    string cp;
    cin>>cp;
    vector<user> userlist;
    user u;
    if(su.checkpassword(cp))
    {
        static user currentuser=su;
while(1)
{
    int ch;
    cout<<"1_________Add User"<<endl;
    cout<<"2_________Show List"<<endl;
    cout<<"3_________Login User"<<endl;
    cout<<"4_________MAIN Work MENU"<<endl;
    cout<<"5_________Current User"<<endl;
    cout<<"Enter choice";
    cin>>ch;
     vector<user> ::iterator it;
     int loginflag=0;
    switch(ch)
    {


        case 1:
		{
		    cout << "Enter Details:  ";
			u.adduser();
			userlist.push_back(u);
			break;

		}
        case 2:

{
    		cout << "Showing list:  ";
            cout<<"super User "<<"***";su.dun();
            cout<<endl;
			for( it=userlist.begin();it!=userlist.end();it++)
           {
               user temp=*it;
                 temp.dun();
                 cout<<" ";
           }
			break;

}
        case 3:
{
                    cout<<"Change user privelege ";
            string cun;
            string cup;
            cout<<"Enter username: ";
            cin>>cun;
            cout<<"Enter userpassword: ";
            cin>>cup;
                loginflag=0;
                for( it=userlist.begin();it!=userlist.end();it++)
                    {
                        user i=*it;
                        if(i.urname()==cun &&  i.checkpassword(cup) )
                        {
                            loginflag=1;
                            currentuser=i;
                            break;
                        }
                    }
                if(loginflag==0)
                    break;


}

        case 4:
        {
            if(loginflag==1)
         cout<<"black zeref"<<endl;
         cout<<"Tree Operations"<<endl;
         break;

        }
        case 5:
          {
             currentuser.dun();

          }
}

    char choice;
    cout<<"Do you Want to quit (Y/N) "<<endl;

    cin>>choice;
    if(choice=='Y')
        exit(0);
    else
        continue;
}
    }
    else
    {
        cout<<"Permission Denied "<<endl;
    }
    return 0;
}
