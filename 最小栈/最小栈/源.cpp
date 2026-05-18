#define _CRT_SECURE_NO_WARNINGS 1
class MinStack {
    stack<pair<int, int>>st;
public:
    MinStack()
    {


        // st.emplace(0, INT_MAX);
        // 栈 st 的最上面就有了一个 pair，它的值是：


        // { .first = 0, .second = INT_MAX }  // 即 (0, 2147483647)
                 // 添加栈底哨兵 INT_MAX
                // 这里的 0 写成任意数都可以，反正用不到
        st.emplace(0, INT_MAX);
        //  emplace(...) 是什么？
        // emplace 是 C++11 引入的一个高效操作，意思是：

        // 在容器（这里是栈）的内部“直接构造”一个对象，而不是先创建再拷贝。

        // 对比：

        // push({0, INT_MAX})：先创建一个 pair，再把它压入栈（可能有拷贝）
        // emplace(0, INT_MAX)：直接在栈里构造这个 pair，更高效、更推荐！

    }
    //     当前栈顶是 {3, 3}（值=3，最小值=3），现在 push(1)：

    // 新最小值 = min(3, 1) = 1
    // 压入 {1, 1}
    void push(int val)
    {
        st.emplace(val, min(getMin(), val));
    }
    //     栈：{3,3} → {1,1} → {5,1}（栈顶）
    // pop() 后变成：{3,3} → {1,1}，最小值自动变回 1。
    void pop() {
        st.pop();
    }
    //栈顶是 {5, 1}，top() 返回 5。
    int top()
    {
        return st.top().first;
        //         .first 存当前值
        // .second 存当前栈中的最小值
    }
    //栈顶是 {5, 1}，getMin() 返回 1。
    int getMin()
    {
        return st.top().second;
    }
    // private:
    //     stack<int>dataStack;
    //     stack<int>minStack;
    // public:
    //     MinStack() {

    //     }

    //     void push(int val) {
    //         dataStack.push(val);

    //         if(minStack.empty()||val<=minStack.top())
    //         {
    //             minStack.push(val);
    //         }

    //     }

    //     void pop() {
    //         if(dataStack.empty())
    //         {
    //             return;
    //         }
    //         int topVal=dataStack.top();
    //         dataStack.pop();
    //         if(topVal==minStack.top())
    //         {
    //             minStack.pop();
    //         }
    //     }

    //     int top() {
    //         if(dataStack.empty())
    //         {
    //             throw std::runtime_error("栈为空，无法获取 top 值！");//抛异常

    //         }
    //         return dataStack.top();
    //     }

    //     int getMin() {
    //         if(minStack.empty())
    //         {
    //           throw std::runtime_error("栈为空，无法获取 top 值！");
    //         }
    //         return minStack.top();
    //     }

};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
 //这个最小栈的秘诀是：每个元素都‘自带’当前的最小值，弹出时自动回滚！