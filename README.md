# learn
记录一下git的基本使用
ssh-keygen -t rsa -C "邮箱“
cat  ～/.ssh/id_rsa.pub
复制公匙到github的setting中去

1.创建本地仓库repository
mkdir test 
cd    test
git   init   //初始化

2.添加文件到仓库
touch test
git add test
git commit -m "commit"
git status  //查询仓库状态
git log    //版本历史记录查看


