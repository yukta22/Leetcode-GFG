//https://leetcode.com/contest/weekly-contest-268/problems/watering-plants/

class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps = 0;
        int initial = capacity;
        for(int i=0;i<plants.size();i++){
            if(plants[i]<=capacity){
                steps++;
                capacity -= plants[i];
            }
            else {
                capacity = initial-plants[i];
                steps += i + i + 1;
            }      
        }
        return steps;

    }
};
