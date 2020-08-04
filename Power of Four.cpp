public:
    bool isPowerOfFour(int num) {
        if (num == 0)
            return false;
        int count=0;
        while (num % 2 == 0)
        {
            num /= 2;
            count++;
        }
        if (count % 2 ==1)
            return false;
        else if (num == 1)
            return true;
        return false;
    }
};