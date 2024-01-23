
#ifndef STACK_H
#define STACK_H

class stack
{
public:
    static constexpr int SIZE{25};

public:
    bool push(int value);

    bool pop(int &elem);

    int available(void);

    bool isempty(void);

    bool isfull(void);

    void clear(void);

private:
    int array[SIZE]{0};
    int top{-1};
};

#endif
