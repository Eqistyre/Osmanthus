#Osmanthus

### <一>简介
这个项目是一个游戏项目，Osmanthus的意思是桂花，这个游戏要讲述的是一个男生大学四年的故事。

### <二>项目目录说明
这个仓库将会用于存储Osmanthus项目的代码,我会建两个仓库存放代码，一个存放项目工程，一个存放项目。

<li>PullGit这个仓库将存放各个平台编译后的代码。

<li>ProgramGit这个仓库将用于存放工程代码。

### <三>版本进度
2015.11.22  项目启动
2015.11.27  Demo制作中

### <四>项目思路

DataPool  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;数据池，单例模式，所有的配置和用户数据</br>
ConfigMap  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;地图配置（记录地图切换的位置）</br>
ConfigText &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;文字配置（根据id获取对应的的中文文字）</br>
ConfigStory &nbsp;&nbsp;&nbsp;&nbsp;剧情配置（游戏所有剧情对话内容）</br>
ConfigEvent &nbsp;&nbsp;&nbsp;&nbsp;事件配置（节操值能力值什么的触发事件）</br>
UserData  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;用户数据（获得哪些物品，触发哪些剧情，在哪个地图）</br>
SpeakLayer &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;对话框</br>
ChooseLayer  &nbsp;&nbsp;&nbsp;选项框</br>
SoundManager 用途不大，主要就是个如果切换地图后所播放的背景音乐一样就不重新播放</br>
WorldLayer  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;提示所在位置</br>
GameScene  &nbsp;&nbsp;&nbsp;&nbsp;游戏场景</br>
MainScene  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;主菜单场景</br>
StartScene  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;最开始显示文字的场景</br>
SceneManager  场景管理，切换场景的特效什么的</br>
Global  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;全局变量</br>
### <五>细节实现
###### 好感度（Impression_Name）：好感度我们暂定使用5分制，5分进入个人线哈。
###### 节操值（Moral_Value）：游戏中会有各种掉节操与增加节操的选项，节操以0为基准。一旦节操过低的时候就会被警察叔叔抓走哦
###### 能力值（Ability_Value）：学霸即使谈不了恋爱也还是可以有自己的GoodEnd！