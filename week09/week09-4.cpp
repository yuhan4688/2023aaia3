//week09-4.cpp 1491.Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        int max= salary[0]; //要找最大值，先拿最前面的人當預設值
        int min= salary[0]; //要找最小值，先拿最前面的人當預設值
        double total=0; //浮點數
        for(int i=0;i<salary.size();i++){
            if(salary[i]>max) max=salary[i];//比最大值還大? 最大值換人
            if(salary[i]<min) min=salary[i];//比最小值還大? 最小值換人
            total+=salary[i];
        }
        return (total -max-min) /(salary.size()-2);
    }
};