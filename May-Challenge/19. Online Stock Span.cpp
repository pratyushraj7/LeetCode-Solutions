class StockSpanner {
private:
    int v[10000];
    int len = 0;
    
public:
    StockSpanner() {
        
    }
    
    int next(int price) 
    {
        v[len++] = price;
        int c = 0;
            for(long long i = len - 1 ; i>=0 ; i--)
            {
                if(v[i] <= price)
                    c++;
                else
                    break;
            }
        return c;
    }
};
