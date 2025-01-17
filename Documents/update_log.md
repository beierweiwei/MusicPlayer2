**简体中文 | [English](./update_log_en-us.md)**

# MusicPlayer2 更新日志
## V2.75 (2022/06/04)

* 新增FFMPEG播放内核（需要单独下载）
* 新增一些新的界面布局
* 界面3、界面4和界面5使用xml重制，优化界面4的效果
* 自定义界面中新增了堆叠组件
* 浮动播放列表的使用逻辑优化
* 修正写入ini时可能出现缓冲区不足的问题
* 在媒体库中新建播放列表时，新的播放列表显示到最前面
* 自绘控件跟随“使用圆角风格”的设置
* 修正“音效设定”中的“混响”无法保存的问题
* 新增自绘菜单栏
* 其他细节方面的改进

## V2.74 (2022/02/12)

* 新增通过xml文件自定义界面的功能（请参照主菜单“帮助”——“自定义界面”的说明）。

* 新增3个界面布局。
* 新增了System Media Transport Controls的支持，将播放控制集成到系统，支持使用多媒体快捷键或蓝牙设备控制音乐的播放。
* 新增通过“文件夹/播放列表”文本框下拉菜单快速切换文件夹/播放列表的功能。
* 新增配置和数据文件保存位置的设置。
* 新增音量图标。
* 歌曲属性中增加采样频率、声道数和位深度的显示。
* 新增右键菜单中的“删除专辑封面”可以删除内嵌专辑封面。
* 修正Windows11下开启“任务栏搜索框显示播放信息”时崩溃的问题。
* 部分窗口中的按钮添加了图标。
* 浮动的播放列表跟随主窗口移动。
* 修正有时在每次启动时都会重新获取歌曲信息的问题。
* “选项”——“歌词设置”中添加“单行和双行显示模式下不显示空白行”的选项。

## V2.73 (2021/08/22)

* 新增两个界面布局。

* 新增歌曲分级功能。
* 媒体库设置中新增手动刷新媒体库的功能。
* 新增使用自绘标题栏的功能（去掉“主菜单-视图-使用系统标准标题栏”的勾选）。
* 新增迷你模式多显示器的支持。
* 选项设置中外部专辑封面支持绝对路径。
* 新增对UTF16格式编码的歌词文件的支持。
* 新增对歌词原文和翻译为相同时间标签的两句歌词的解析。
* 转换格式中新增自定义输出文件名的功能。
* 选项设置中增加是否显示播放列表鼠标提示的设置。
* 新增桌面歌词对齐方式的设置。
* 桌面歌词遵循歌词卡拉OK样式显示的设置。
* 全局快捷键设置中增加“显示/隐藏”播放器的快捷键。
* 选项设置中新增禁用从磁盘删除的选项。
* 新增播放设备变化时自动切换播放设备的功能。
* 新增歌曲标签ID3v2写入版本的设置。
* 修正选项设置中使用鼠标滚轮滚动页面时，页面中的控件会响应鼠标滚轮消息的问题。
* 修正转换格式中转换成mp3格式后，写入的标签信息中一些Unicode字符会变成问号的问题。
* 修正从配置文件载入全局快捷键设置可能出现错误的问题。
* 修正使用某些字体时，桌面歌词最后一个字符无法显示的问题。
* 修正切换播放列表时可能会将当前播放列表保存到错误的文件问题。
* 其他细节方面的改进。

## V2.72 (2021/01/24)

* 增加了一个新的界面布局
* “媒体库”——“播放列表”界面中新增播放列表中曲目的显示
* 下载歌词对话框中的列表增加“长度”列
* 新增内嵌cue分轨的支持
* 属性对话框中增加“高级标签信息”标签页
* 新增使用桌面背景作为背景的功能
* 新增播放列表文件中相对路径的支持
* 右键菜单中新增跳转到媒体库中当前歌曲艺术家和唱片集的功能
* 歌词编辑界面编辑器使用Scintilla，增加颜色显示
* 新增tak格式音频的支持（仅32位版本）
* 修正转换格式为mp3和wav时无法向目标文件复制专辑封面的问题
* 修正桌面歌词右键菜单中的“循环模式”-“随机播放”没有图标的问题
* 修正使用触屏设备时，选项设置界面中的子对话框无法使用触屏滚动的问题
* 修正添加正在播放的曲目到新播放列表时提示“文件已存在”的问题
* 修正选项设置窗口中，如果使用鼠标滚轮滚动了子窗口的位置，点击滚动条时子窗口位置不正确的问题
* 修正重命名后，播放列表不刷新的问题
* 修正当播放进度小于5秒时执行快退命令会导致进度条位置不正确的问题
* 修正顺序模式下列表曲目播放完后任务栏搜索框信息无法显示的问题，以及关闭任务栏搜索框信息后再打开后无法显示的问题
* 修正播放列表为空时无法调整音量的问题

## V2.71 (2020/09/13)

* 使用taglib库获取音频标签和专辑封面，新增了十几种音频格式的标签和专辑封面获取功能。
* 新增音频标签和专辑封面的写入功能。
* 音频属性中新增标签批量编辑的功能。
* 音频属性中新增“从文件名获取标签”、“从歌词获取标签”和“在线获取标签”的功能。
* 音频属性中新增“专辑封面”标签页。
* 修正文件夹模式下添加歌曲到刚刚打开过的播放列表时播放列表发生错乱的问题。
* 新增内嵌歌词的读写功能。
* 新增文件重命名的功能。
* 修正格式转换中转换为mp3格式选择覆盖已存在的目标文件时，临时文件无法重命名的问题。
* 其他细节方面的改进。

## V2.70.1 (2020/08/27)

* 修正播放列表中曲目数量过多时随机播放和无序播放无法正常工作的问题。

## V2.70 (2020/08/26)

* 修正部分FLAC音频标签信息和专辑封面获取的问题。
* 主界面播放控制图标更新。
* 应用程序图标重新设计。
* 为菜单项增加图标。
* 选项设置>外观设置中增加界面刷新时间间隔的选项。
* 不显示专辑封面时的黑胶唱片图片更新。
* 新增将正在播放的曲目添加到播放列表的功能。
* 修正从资源管理器中同时打开多个音频文件会启动多个进程同时播放的问题。
* 修正无法正常读取UTF8格式的cue文件的问题，新增对UTF16-LE-BOM编码格式的cue文件的支持。
* 修正歌词过多时会导致加载播放列表卡顿的问题。
* 新增手动关联本地歌词的功能。
* 新增更换通知区图标的功能。
* 新增圆角风格的按钮样式。
* 修正句柄泄漏的问题。
* 修正选项设置>全局快捷键中，某一个快捷键设置为“无”导致后面其他快捷键都失效的问题。
* 修正打开“媒体库”对话框时卡顿的问题。
* 修正从媒体库中打开cue文件时未获取对应音频的长度和比特率的问题。
* 如果专辑封面尺寸过大则将其缩小，以解决界面卡顿的问题。
* 将UI绘图放到后台线程中处理，以解决UI绘图耗时过长导致消息阻塞的问题。
* 修正下载cue歌词时，如果艺术家或标题含有无法作为文件名的字符，则无法下载的问题。
* 修正无法获取wav格式id3v2标签的问题。
* 修正“播放时间统计”中导出csv文件时不能正确处理字段中逗号的问题。
* 播放列表排序功能中新增按文件修改时间排序，以及升降和降序排列的功能。
* 修正无法获取bmp格式专辑封面的问题。
* 文件夹模式中增加包含子文件夹的功能
* 修正从媒体库中添加曲目到当前播放列表，当前播放列表没有刷新的问题。
* 媒体库中新增“文件类型”和“比特率”标签页（需要在选项设置>媒体库中开启）。
* 新增更换默认背景图片的功能（选项设置>外观设置）。
* 循环模式中增加“无序播放”的模式。
* 新增开机自动运行的功能。
* 修正播放设备发生变化时无法继续播放的问题。
* 稍微减少了程序的内存占用。
* 修正一些崩溃的问题。

## V2.69 (2020/04/15)

* 新增AB重复的功能
* 新增获取内嵌歌词的功能
* 新增APE格式标签识别的支持
* 新增打开播放列表功能，支持m3u/m3u8格式
* 修正编辑歌词中，当光标放到最前面时，插入时间标签会插入到文件末尾的问题
* 新增保存播放列表为播放列表文件的功能
* 新增以迷你模式启动的功能（主菜单——工具——创建快捷方式——创建迷你模式快捷方式）
* 媒体库中增加最近播放曲目
* 修正读取FLAC标签时末尾可能会多出一个字符的问题
* 允许在全屏模式下进入迷你模式
* 播放列表和媒体库中的文本使用本地语言排序（简体中文系统中使用汉语拼音排序）
* 其他bug修正和细节方面的改进

## V2.68 (2020/01/22)

* 媒体库中增加“艺术家”、“唱片集”、“流派”等组织歌曲的方式，增加所有歌曲和文件夹浏览。
* 新增媒体库选项。
* 新增启动时自动扫描指定目录下音频文件的功能。
* 转换格式中增加转换频率的功能。
* 查找界面右键菜单增加更多功能。
* 修正转换成MP3格式时如果文件名中含有Unicode字符会导致转换失败的问题。
* 新增自动下载歌词时文件保存位置的选项。
* 新增歌词对齐方式的选项。
* 一些bug修复及细节方面的改进
## V2.67 (2019/11/28)
* 新增桌面歌词功能。
* 新增播放列表工具栏。
* 新增cue音轨可以添加到播放列表。
* 新增调整播放速度的功能。
* 修正了一些bug。
* 其他细节方面的改进。
## V2.66 (2019/08/03)
* 新增播放列表功能，可自由创建和编辑播放列表。
* 新增歌曲红心的功能。
* 修正部分flac音频标签获取不正确的问题。
* 新增文件关联功能。
* 修正窗口大小改变时会导致GDI句柄泄漏的问题。
* 新增声音淡入淡出效果。
* 修正了一些bug。
* 其他细节方面的改进。
## V2.65 (2019/05/25)
* 新增在搜索框显示频谱分析的功能
* 新增累计听歌时间统计的功能
* 新增浮动播放列表的功能
* 新增总是置顶的功能
* 新增崩溃时显示错误信息并生成dump文件的功能
* 字体设置增加粗体、斜体和下划线的样式设置
* 新增创建播放控制快捷方式的功能
* 新增x64的支版本
* 其他细节方面的改进
## V2.64 (2019/02/16)
* 界面调整，界面中的播放控制按钮和进度条美化。
* 新增隐藏/显示播放列表的功能。
* 新增隐藏/显示菜单栏的功能。
* 新增响应多媒体按键的功能。
* 小娜搜索框歌词显示效果优化。
* 新增全屏显示的功能。
* 其他界面细节方面的调整。
* 其他细节方面的改进。
## V2.63 (2019/01/06)
* 主界面重新设计，外观更加简洁美观。仍然可以快速切换回以前的界面
* 迷你模式界面重新设计，使用和主界面相同的风格
* 优化获取系统主题颜色的功能，获取实际的系统主题颜色而不是窗口标题栏的颜色
* 修正一个由于GDI句柄泄漏导致程序运行一段时间崩溃的问题
* 新增全局快捷键的设置
* 增加通知区图标，关闭主窗口时可以最小化到通知区而不是退出程序
* 新增多语言支持，增加英语
* 其他细节方面的改进
## V2.62 (2018/09/08)
* 新增深色UI主题
* 频谱分析显示效果优化，增加顶端柱形
* 新增歌词翻译的原文双行显示
* 对于有翻译的歌词，执行歌词繁简转换时，只转换译文
* 修正设置了背景高斯模糊后，有时会导致背景为黑色的问题
* 新增选择播放设备的功能
* 修正下载的歌词时有时翻译在前面的问题
* 修正某些情况下获取的mp3标签不正确的问题
* 新增格式转换支持cue分轨
* 修正歌词结果中显示的歌曲信息如果含有“,”，则会导致显示不正确的问题
* 其他细节方面的改进
## V2.61 (2018/07/28)
* 新增bass播放插件，可支持几乎所有格式的音频格式
* 新增 MIDI 音乐播放功能，可加载音色库
* 优化频谱分析显示效果，增加频谱柱形的条数
* 新增格式转换功能，可将任意音频格式转换成 WAV、MP3、WMA和OGG
* 新增背景图片高斯模糊效果，选项设置中增加相关设置
* 新增没有专辑封面时显示默认的背景图片
* 新增播放列表可选中多个项目
* 其他细节方面的改进
## V2.60 (2018/07/08)
* 修正当小娜被禁用时，小娜搜索框上的歌词显示位置不正确的问题
* 新增：设置小娜搜索框歌词背景颜色的功能
* 匹配本地歌词文件时使用全词匹配，解决了有时会匹配到错误的歌词的问题
* 新增：“选择路径”列表中的右键菜单，增加“清除无效路径”功能
* 新增：随机播放时可向前回溯的功能
* 修正当程序首次运行时，迷你模式中播放列表默认展开的问题
* 新增：小娜搜索框图标跟随音乐节奏跳动的功能
* 优化音频标签的获取，解决了标签信息乱码或获取到的信息不正确的问题
* 优化了内嵌专辑封面的获取，解决了部分文件无法获取内嵌专辑封面的问题
* 新增：播放列表快速搜索的功能
* 新增：优先获取ID3V2标签的选项
* 新增：专辑封面在线下载功能
* 新增：自动下载专辑封面和歌词的功能
* 新增：自动检查更新的功能
## V2.59 (2018/03/11)
* 修正播放flac等扩展名不是3个字符的文件时无法加载歌词的问题
* 增加flac格式标签和专辑封面的支持
* 修正文件夹中有多个cue文件时可能会无法解析的问题
* 增加从外部图片获取专辑封面的功能
* 歌词编辑界面增加工具栏
* 增加APE格式的支持
* 修正播放cue文件时无法记住上次播放位置的问题
一些细节方面的改进
## V2.58 (2018/02/07)
* 增加专辑封面显示
* 选项设置中增加专辑封面相关设置
* 新增在Cortana搜索框中显示专辑封面
* 新增迷你模式中显示专辑封面
* 新增专辑封面另存为功能
* 一些细节方面的改进
## V2.57 (2018/02/04)
* 歌词右键菜单中增加“打开歌词文件位置”菜单项
* 新增歌曲标签可写入（目前仅支持MP3格式）
* 增加歌词繁简转换功能
* 增加小娜搜索框歌词双行显示功能
## V2.56 (2017/12/17)
* 小娜搜索框歌词适配白色搜索框
* 增加选择路径对话框可调整大小
* 播放列表加载过程中，禁用播放列表控件，并将鼠标状态改为“忙”
* 右击窗口时在歌曲信息区域和歌词区域弹出不同的右键菜单
* 当歌词文件夹不存在时，禁用“保存到歌词文件夹”单选按钮
* 选择路径对话框中，列表适应主题颜色
* 调整播放列表控件的样式
* 其他细节优化
