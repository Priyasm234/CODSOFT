#include<iostream>
#include<string>
#include<vector>
using namespace std;
int id=1;
struct element{
    int task_id;
    string task_name;
    bool task_status;
};

class todoList{
    vector<element> tasks;
    public:
    void add_task()
    {
            string name;
            cout<<"\nEnter task to add to your list: ";
            cin.ignore();
            getline(cin,name);
            tasks.push_back({id++,name,false});
            cout<<"\nTask - "<<name<<" added successfully to your to-do-list!!\n";
    }
    void display_tasks()
    {
        if(tasks.empty())
        cout<<"\nYour list is empty!!\nPlease add some tasks...\n\n";
        else
        { 
            cout<<"\nHere is your to-do-list : \n\n";
            for(int i=0;i<tasks.size();i++)
            {
                cout<<i+1<<". "<<tasks[i].task_name<<" - "<<(tasks[i].task_status ? "[Completed]" : "[Pending]")<<endl;
            }
        }
    }
    void delete_task()
    {
        cout<<"\nEnter task Id to delete task : ";
        int t_id;
        cin>>t_id;
        if(t_id>=1 && t_id<=tasks.size())
        {
            cout<<"\nTask - "<<tasks[t_id-1].task_name<<" deleted successfully from your list!!\n";
            tasks.erase(tasks.begin() + t_id - 1);
        }
        else
        cout<<"\nNo task with this Id is found in your list!!\n";
    }
    void update_status()
    {
        cout<<"\nEnter task Id to update status : ";
        int t_id;
        cin>>t_id;
        if(t_id>=1 && t_id<=tasks.size())
        {
            tasks[t_id-1].task_status= true;
            cout<<"\nTask - "<<tasks[t_id - 1].task_name<<" updated successfully!!\n";
        }
        else
        cout<<"\nNo task with this Id is found in your list!!\n\n";
    }

};
int main()
{
    todoList tdl1;
    cout<<"\n\n              ----------- TO-DO-LIST -----------\n\n";
    cout<<"Tasks for you: \n";
    cout<<"1 . Add Task\n";
    cout<<"2 . Update Task Status\n";
    cout<<"3 . Display to-do-List\n";
    cout<<"4 . Delete Task\n";
    cout<<"5 . Exit\n";
    int ch;
    do{
        cout<<"\nEnter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                tdl1.add_task();
                break;
            case 2:
                tdl1.update_status();
                break;
            case 3:
                tdl1.display_tasks();
                break;
            case 4:
                tdl1.delete_task();
                break;
            case 5:
                cout<<"Exiting....\n\n";
                exit(0);
                break;
            default:
                cout<<"Invalid choice, choose only between 1 and 5\n";
                break;
        }
    }while(ch!=5);    
}