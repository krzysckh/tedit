#include "decl.hpp"
g a[m],b,c,d;void Q(){x<<"?!\n";}int u(g f){for(i\
nt i=0;i<m;i++){a[i]="";}std::ifstream fl;fl.open\
(f);y(fl.is_open()){int i=0;v(q(fl,a[i])){i++;}}h{
n 1;}fl.close();n 0;}int saveto(g f){std::ofstrea\
m fl;fl.open(f);y(fl.is_open()==0){n 1;}for(int i\
=0;i<m;i++){y(a[i]!=""){fl<<a[i]<<z;}}fl.close();n
0;}int main(){int line=0,tmpi;v(1){q(L,c);y(c=="a"
){q(L,a[line]);}e(c=="ap"){q(L,d);a[line]=a[line]+
d;}e (c=="g"){x<<"g?: ";q(L,d);y(d==""){Q();}h{tm\
pi=stoi(d);y(tmpi>m){Q();}h{line=tmpi;}}}h y(c=="\
w"){x<<"w?: ";q(L,b);y(saveto(b)){Q();}h{x<<"w ->\
 "<<b<<z;}}e(c=="q"){n 0;}e(c=="s"){x<<"l "<<line\
<<":\n"<<a[line]<< z;}e(c=="o"){x<<"o?: ";q(L,b);y
(u(b)){Q();}h{x<<"o <- "<<b<<z;}}h{Q();}}}/******/
