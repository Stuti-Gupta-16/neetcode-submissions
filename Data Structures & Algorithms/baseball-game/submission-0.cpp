class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                if(s.size()>=2){
                    int a=s.top();
                    s.pop();
                    int b=s.top();
                    s.push(a);
                    s.push(a+b);
                }
            }
            else if(operations[i]=="D" && !s.empty()){
                s.push(s.top()*2);
            }
            else if(operations[i]=="C" && !s.empty()) s.pop();
            else {
                int n=stoi(operations[i]);
                s.push(n);
            }
        }
        int sum=0;
        while(!s.empty()){
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};