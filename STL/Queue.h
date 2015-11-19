#include <deque>
using namespace std;
template <typename T>
class Queue{
private:
    deque<T> container;
public:
    bool Empty(){
        return container.empty();
    }
    long long int Size(){
        return container.size();
    }
    T Front(){
        return container[0];
    }
    T Back(){
        return container[container.size()-1];
    }
    void Push(T item){
        container.push_back(item);
    }
    void Pop(){
        container.pop_front();   
    }
    deque<T> getContainer(){
        return container;    
    }
    Queue<T> operator+(Queue<T>queb){
        deque<T>deq(queb.getContainer);
        Queue<T> queue3;
        for(long long int i=0;i<container.size();++i){
            queue3.push(container[i]);
        }
        for(long long int i=0;i<deq.size();++i){
            queue3.push(deq[i]);
        }
        return queue3;
    }
    Queue<T>operator-(Queue<T>queueb){
        vector<T>deqb(queueb.getContainer());
        vector<T>deqa(container);
        for(int i=0;i<deqa.size();i++){
            for(int j=0;j<deqb.size();j++){
                if(deqa[i]==deqb[j]){
                    deqa.erase(deqa.begin()+i);
                    i--;
                    break;
                }
            }
        }
        Queue<T>q3;
        for(int i=0;i<deqa.size();i++){
            q3.push(deqa[i]);
        }
        return q3;
    }
};
