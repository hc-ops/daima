#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        //x ^ x = 0，x ^ 0 = x
        //想得到目标不同数字（例如3,5）就按位异或^,相同为0，相异为1
        //找到最低位的 1，就用按位与&，都为1才为1，否则为0
        // xor_all = a ^ b	找到 a 和 b 哪些位不同
        // lowbit = xor_all & (-xor_all)	找到其中一个不同的位（最右边的 1）
        // 用 x & lowbit 分组	把 a 和 b 分到不同组，其他成对数在同一组内抵消
        int xor_all = 0;
        //1.设两个恰好出现一次的数为a,b
        //xor_all^=x;得到1^2^1^3^2^5=3^5，得到a^b
        for (auto x : nums)
        {
            xor_all ^= x;
        }
        //2.找到最低位的 1
        long long lowbit = xor_all & (-(long long)xor_all);
        //3.分组异或，x遍历nums分别和最低位的1的这个数按位与，结果为0分为一组，结果为1分为一组
        //最后组内全部一起异或得到a,b
        int a = 0;
        int b = 0;
        for (auto x : nums)
        {
            if (x & lowbit)
            {
                a ^= x;
            }
            else
            {
                b ^= x;
            }
        }
        return { a,b };
    }
};








// 这个技巧的含义是：
// x & (-x) 返回 x 的二进制表示中，最右边的那一个 1，其余位都变成 0。

// x（十进制）	x（二进制）	x & (-x)（二进制）	含义
// 6	0110	0010 → 2	第1位是1
// 8	1000	1000 → 8	第3位是1
// 12	1100	0100 → 4	第2位是1