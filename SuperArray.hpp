class SuperArray
{
	private:

        int m_size;
        int m_capacity;
        int  *m_data;

        public:
        
        SuperArray(int x);
	SuperArray();
	int getSize();
        int getCapacity();
	void pushBack(int value);
	void set(int index,int value);      
        int get(int index);
        ~SuperArray();
        
	        
};

