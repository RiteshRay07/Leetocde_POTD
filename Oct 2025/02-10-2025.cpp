// https://leetcode.com/problems/water-bottles-ii/description/

// Leetcode 3100

class Solution
{
public:
    int maxBottlesDrunk(int numBottles, int numExchange)
    {
        int drunk = numBottles;
        int empty = numBottles;

        while (empty >= numExchange)
        {
            drunk = drunk + 1;
            empty = empty - numExchange + 1;
            numExchange++;
        }

        return drunk;
    }
};