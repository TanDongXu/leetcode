/*************************************************************************
	> File Name: NimGame.cpp
	> Author: TDX 
	> Mail: sa614149@mail.ustc.edu.cn
	> Created Time: 2016年02月29日 星期一 10时02分35秒
 ************************************************************************/

class Solution {
     /*
      * 因为每次只能拿1~3个，所以我们就看n是不是4的倍数就可以了
      * 如果不是4的倍数，那我们可以先手拿一些使得n为4的倍数
      * 然后不过对手拿多少个，我们都可以凑成4
      * 比如对面拿1个我们就拿3个，对面拿2个我们就拿2个
      * 这样最后一个一定是我们的
      *  同理，如果n是4的倍数则我们一定输
      * 
      */
    public:
    bool canWinNim(int n) {

                return n % 4 == 0 ? false:true;
                        
    }
        
};