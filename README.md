# LLCalendar
## 简单的日历，由于项目涉及到了，本来打算找轮子，可是拓展太繁琐了，就自己写了个简单的，超级容易拓展。

![(Demo)](https://github.com/LvJianfeng/LLCalendar/blob/master/2.gif)

### 对象存储`MonthModel`
    * 你可以在模型里自由拓展你要存储的对象。
  
### 天的信息显示`CalendarCell`，继承于`UICollectionViewCell`
    *这个你应该更熟悉了，所以想怎么显示就怎么显示，想加入什么动画，可谓收放自如了就。
  
### 礼拜信息的显示`CollectionViewHeader`，继承于`UICollectionReusableView`
    *你可以自己控制显示样式，显示的信息，显示的方式。

#### 通过上面的一番描述，这就是日历，让你显示的收放自如。
#### 也许我写的日历没有那么高性能，你可以优化，希望你优化的同时可以issues我，当提点我一下了哦。
#### 由于所有的代码现在一个文件中，所以你可以把方法抽出来，维护到代码里，这样更易读。



