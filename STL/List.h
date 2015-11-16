#include <vector>
 using namespace std;
 template<typename T>
 class List{
 private:
    vector<T>container;
 public:
    void Add_item(T item){
        container.push_back();
    }
    void Delete_item(long long int position){
        container.erase(container.begin()+position);
    }
    void Insert_item(T item, long long int position){
        container.insert(container.begin()+position, item);
    }
    long long int Size(){
        return container.size();
    }
    vector<T>getContainer(){
        return container;    
    }
    List<T> operator+(List<T> listb){
        vector<T>vec(listb.getContainer());
        List<T>list3;
        for(int i=0;i<container.size();++i){
            list3.Add_item(container[i]);
        }
        for(int i=0;i<vec.size();++i){
            list3.Add_item(vec[i]);
        }
        return list3;
    }
 };
