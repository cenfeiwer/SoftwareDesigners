#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

/***********************************************************************
* 设计模式（Design pattern）
* 设计模式是一套被反复使用的、多数人知晓的、经过分类编目的、代码设计经验的总结。
* 使用设计模式是为了重用代码、让代码更容易被他人理解、保证代码可靠性。
* 
* https://www.runoob.com/design-pattern/design-pattern-tutorial.html
* https://design-patterns.readthedocs.io/zh_CN/latest/read_uml.html
* 
* 设计模式的六大原则:
*	1、开闭原则（Open Close Principle）
* 	2、里氏代换原则（Liskov Substitution Principle）
*	3、依赖倒转原则（Dependence Inversion Principle）
*	4、接口隔离原则（Interface Segregation Principle）
*	5、迪米特法则，又称最少知道原则（Demeter Principle）
*	6、合成复用原则（Composite Reuse Principle）
* 
* 创建型模式:
*	工厂模式（Factory Pattern）
*	抽象工厂模式（Abstract Factory Pattern）
*	单例模式（Singleton Pattern）
*	建造者模式（Builder Pattern）
*	原型模式（Prototype Pattern）
* 
* 结构型模式:
*	适配器模式（Adapter Pattern）
*	桥接模式（Bridge Pattern）
*	过滤器模式（Filter、Criteria Pattern）
*	组合模式（Composite Pattern）
*	装饰器模式（Decorator Pattern）
*	外观模式（Facade Pattern）
*	享元模式（Flyweight Pattern）
*	代理模式（Proxy Pattern）
* 
* 行为型模式:
*	责任链模式（Chain of Responsibility Pattern）
*	命令模式（Command Pattern）
*	解释器模式（Interpreter Pattern）
*	迭代器模式（Iterator Pattern）
*	中介者模式（Mediator Pattern）
*	备忘录模式（Memento Pattern）
*	观察者模式（Observer Pattern）
*	状态模式（State Pattern）
*	空对象模式（Null Object Pattern）
*	策略模式（Strategy Pattern）
*	模板模式（Template Pattern）
*	访问者模式（Visitor Pattern）
* 
* J2EE 模式:
*	MVC 模式（MVC Pattern）
*	业务代表模式（Business Delegate Pattern）
*	组合实体模式（Composite Entity Pattern）
*	数据访问对象模式（Data Access Object Pattern）
*	前端控制器模式（Front Controller Pattern）
*	拦截过滤器模式（Intercepting Filter Pattern）
*	服务定位器模式（Service Locator Pattern）
*	传输对象模式（Transfer Object Pattern）
*/
class DesignPattern {
public:
	DesignPattern();
	~DesignPattern();
};




/***********************************************************************
* 工厂模式（Factory Pattern）
* 工厂方法模式一种创建对象的模式，它被广泛应用在jdk中以及Spring和Struts框架中。
* 就是多个子类继承同一个基类，然后使用基类的虚函数啦~
* 
* 优点：	1、面向接口编程，体现了面向对象的思想。 
*			2、将创建对象的工作转移到了工厂类。 
* 
* 使用场景：1、日志记录器：记录可能记录到本地硬盘、系统事件、远程服务器等，\
*				用户可以选择记录日志到什么地方。 
*			2、数据库访问，当用户不知道最后系统采用哪一类数据库，\
*				以及数据库可能有变化时。 
*			3、设计一个连接服务器的框架，需要三个协议，可以把这三个作为产品类，\
*				共同实现一个接口。
*/
namespace FactoryPattern
{
	class FactoryPattern {
	public:
		FactoryPattern();
	};
}

/***********************************************************************
* 抽象工厂模式（Abstract Factory Pattern）
* 在抽象工厂模式中，接口是负责创建一个相关对象的工厂，不需要显式指定它们的类。
* 简单的说，类似工厂的工厂
*/
namespace AbstractFactoryPattern
{
	// 参考工厂即可
}

/***********************************************************************
* 单例模式（Singleton Pattern）
* 最简单的设计模式之一。
* 
* 优点：	1、在内存里只有一个实例，减少了内存的开销，\
*				尤其是频繁的创建和销毁实例（比如管理学院首页页面缓存）。
*			2、避免对资源的多重占用（比如写文件操作）。
* 
* 使用场景：1、要求生产唯一序列号。
*			2、WEB 中的计数器，不用每次刷新都在数据库里加一次，用单例先缓存起来。
*			3、创建的一个对象需要消耗的资源过多，比如 I/O 与数据库的连接等。
* 
* 注意事项：拒绝懒汉式实现，一定要考虑线程安全！（这里演示就最简单的写法）
*/
namespace SingletonPattern
{
	class SingletonPattern
	{
	public:
		static SingletonPattern *getInstance();
		static void release();
	private:
		static SingletonPattern *m_instance;
	};
}

/***********************************************************************
* 建造者模式（Builder Pattern）
* 使用多个简单的对象一步一步构建成一个复杂的对象。
* 汉堡、可乐、薯条、炸鸡翅等是不变的，而其组合是经常变化的，生成出所谓的"套餐"。
* 
* 优点：	1、建造者独立，易扩展。 
*			2、便于控制细节风险。
* 
* 使用场景：1、需要生成的对象具有复杂的内部结构。 
*			2、需要生成的对象内部属性本身相互依赖。
*/
namespace BuilderPattern
{
	class BuilderPattern {
	public:
		BuilderPattern();
	};
}

/***********************************************************************
* 原型模式（Prototype Pattern）
* 创建重复的对象，同时又能保证性能。一般是和工厂方法模式一起出现。
* 例如，一个对象需要在一个高代价的数据库操作之后被创建。我们可以缓存该对象，
* 在下一个请求时返回它的克隆，在需要的时候更新数据库，以此来减少数据库调用。
* 
* 优点：	1、性能提高。
*			2、逃避构造函数的约束。
* 
* 使用场景：1、资源优化场景。 
*			2、类初始化需要消化非常多的资源，这个资源包括数据、硬件资源等。 
*			3、性能和安全要求的场景。 
*			4、通过 new 产生一个对象需要非常繁琐的数据准备或访问权限，\
*				则可以使用原型模式。
*			5、一个对象多个修改者的场景。
*			6、一个对象需要提供给其他对象访问，各个调用者都需要修改其值，\
*				使用原型模式拷贝多个对象供调用者使用。
*/
namespace PrototypePattern
{
	// 保存一个已初始化的对象，下次需要新建时直接拷贝这个对象
}











/***********************************************************************
* 适配器模式（Adapter Pattern）
* 作为两个不兼容的接口之间的桥梁。为了解决问题的一种方法，但是用多了很恶心。
* 
* 优点：	1、可以让任何两个没有关联的类一起运行。 
*			2、提高了类的复用。 
*			3、增加了类的透明度。
*			4、灵活性好。
* 
* 注意事项：适配器不是在详细设计时添加的，而是解决正在服役的项目的问题。
*/
namespace AdapterPattern
{
	// 不提倡，不演示了
}

/***********************************************************************
* 桥接模式（Bridge Pattern）
* 桥接是用于把抽象化与实现化解耦，使得二者可以独立变化。
* 
* 优点：	1、抽象和实现的分离。 
*			2、优秀的扩展能力。 
*			3、实现细节对客户透明。
*/
namespace BridgePattern
{
	class BridgePattern	{
	public:
		BridgePattern();
	};
}

/***********************************************************************
* 过滤器模式（Filter Pattern）或标准模式（Criteria Pattern）
* 允许使用不同的标准来过滤一组对象，通过逻辑运算以解耦的方式把它们连接起来。
* 设计时可以考虑使用
* 
* 优点：	后期维护简单，几乎不需要改代码
*/
namespace FilterPattern
{
	class FilterPattern {
	public:
		FilterPattern();
	};
}

/***********************************************************************
* 组合模式（Composite Pattern）
* 又叫部分整体模式，是用于把一组相似的对象当作一个单一的对象。
* 就是一棵树，根节点节点包含很多歌子节点，子节点又继续延伸。
* 
* 使用场景：1、您想表示对象的部分-整体层次结构（树形结构）。
*			2、您希望用户忽略组合对象与单个对象的不同，\
*				用户将统一地使用组合结构中的所有对象。
*			3、树形菜单，文件、文件夹的管理。
* 
* 注意事项：定义时为具体类。
*/
namespace CompositePattern
{
	class CompositePattern {
	public:
		CompositePattern();
	};
}

/***********************************************************************
* 装饰器模式（Decorator Pattern）
* 允许向一个现有的对象添加新的功能，同时又不改变其结构。
* 动态地添加一些额外的职责。就增加功能来说，装饰器模式相比生成子类更为灵活。
* 
* 优点：装饰类和被装饰类可以独立发展，不会相互耦合，
*		装饰模式是继承的一个替代模式，装饰模式可以动态扩展一个实现类的功能。
*/
namespace DecoratorPattern
{
	class DecoratorPattern {
	public:
		DecoratorPattern();
	};
}

/***********************************************************************
* 外观模式（Facade Pattern）
* 电脑整机是 CPU、内存、硬盘的外观。有了外观以后，启动电脑和关闭电脑都简化了。
* 启动电脑（按一下电源键）：启动CPU、启动内存、启动硬盘
* 关闭电脑（按一下电源键）：关闭硬盘、关闭内存、关闭CPU
*/
namespace FacadePattern
{
	// 实现很简单不写了
}

/***********************************************************************
* 享元模式（Flyweight Pattern）
* 主要用于减少创建对象的数量，以减少内存占用和提高性能。
* 就是共享同一个实例，一个改变了其他的也跟着改变。
* 
* 使用场景：1、系统有大量相似对象。 
*			2、需要缓冲池的场景。
* 
* 注意事项：1、注意划分外部状态和内部状态，否则可能会引起线程安全问题。
*			2、这些类必须有一个工厂对象加以控制。
*/
namespace FlyweightPattern
{
	class FlyweightPattern {
	public:
		FlyweightPattern();
	};
}

/***********************************************************************
* 代理模式（Proxy Pattern）
* 一个类代表另一个类的功能。增加中间层。
* 
* 优点：	1、职责清晰。 2、高扩展性。 3、智能化。
* 
* 使用场景：按职责来划分，通常有以下使用场景： 
*			1、远程代理。 2、虚拟代理。 3、Copy-on-Write 代理。 
*			4、保护（Protect or Access）代理。 5、Cache代理。 
*			6、防火墙（Firewall）代理。 7、同步化（Synchronization）代理。 
*			8、智能引用（Smart Reference）代理。
* 
* 注意事项：1、和适配器模式的区别：适配器模式主要改变所考虑对象的接口，\
*				而代理模式不能改变所代理类的接口。 
*			2、和装饰器模式的区别：装饰器模式为了增强功能，而代理模式是为了加以控制。
*/
namespace ProxyPattern
{
	// 演示可以很简单，真正实现可以很复杂
}










/***********************************************************************
* 责任链模式（Chain of Responsibility Pattern）
* 职责链上的处理者负责处理请求，客户只需要将请求发送到职责链上即可，无须关心
* 请求的处理细节和请求的传递，所以职责链将请求的发送者和请求的处理者解耦了。
* 
* 优点：	1、降低耦合度。它将请求的发送者和接收者解耦。
*			2、简化了对象。使得对象不需要知道链的结构。 
*			3、增强给对象指派职责的灵活性。通过改变链内的成员或者调动它们的次序，\
*				允许动态地新增或者删除责任。
*			4、增加新的请求处理类很方便。
* 
* 缺点：	1、不能保证请求一定被接收。 
*			2、系统性能将受到一定影响，而且在进行代码调试时不太方便，\
*				可能会造成循环调用。 
*			3、可能不容易观察运行时的特征，有碍于除错。
* 
* 使用场景：1、有多个对象可以处理同一个请求，具体哪个对象处理该请求由运行时刻自动确定。 
*			2、在不明确指定接收者的情况下，向多个对象中的一个提交一个请求。
*			3、可动态指定一组对象处理请求。
*/
namespace CORPattern
{
	class CORPattern {
	public:
		CORPattern();
	};
}

/***********************************************************************
* 命令模式（Command Pattern）
* ping www.google.com -t 就是一种
* 
* 使用场景：认为是命令的地方都可以使用命令模式比如： 
*			1、GUI 中每一个按钮都是一条命令。
*			2、模拟 CMD。
*/
namespace CommandPattern
{
	// 不演示
}

/***********************************************************************
* 解释器模式（Interpreter Pattern）
* 
* 优点：	1、可扩展性比较好，灵活。
*			2、增加了新的解释表达式的方式。 
*			3、易于实现简单文法。
* 
* 缺点：	1、可利用场景比较少。
*			2、对于复杂的文法比较难维护。 
*			3、解释器模式会引起类膨胀。
*			4、解释器模式采用递归调用方法。
* 
* 注意事项：可利用场景比较少，量足够大时才会用到
*/
namespace InterpreterPattern
{
	// 不演示
}

/***********************************************************************
* 迭代器模式（Iterator Pattern）
* 用于顺序访问集合对象的元素，不需要知道集合对象的底层表示。
* 
* 优点：	1、它支持以不同的方式遍历一个聚合对象。
*			2、迭代器简化了聚合类。
*			3、在同一个聚合上可以有多个遍历。
*			4、在迭代器模式中，增加新的聚合类和迭代器类都很方便，无须修改原有代码。
*
* 使用场景：1、访问一个聚合对象的内容而无须暴露它的内部表示。 
*			2、需要为聚合对象提供多种遍历方式。 
*			3、为遍历不同的聚合结构提供一个统一的接口。
*/
namespace IteratorPattern
{
	// c++不解释
}

/***********************************************************************
* 中介者模式（Mediator Pattern）
* 该类通常处理不同类之间的通信，并支持松耦合，使代码易于维护。
*
* 优点：	1、简化了对象之间的关系，将系统的各个对象之间的相互关系进行封装，\
*				将各个实例类解耦，使得系统变为松耦合。
*			2、提供系统的灵活性，使得各个实例对象独立而易于复用。
* 
* 缺点：	1、中介者模式中，中介者角色承担了较多的责任，\
*				所以一旦这个中介者对象出现了问题，整个系统将会受到重大的影响。
*			2、新增加一个实例类时，不得不去修改抽象中介者类和具体中介者类，\
*				此时可以使用观察者模式和状态模式来解决这个问题。
* 
* 使用场景：1、一组定义良好的对象，现在要进行复杂的相互通信。
*			2、想通过一个中间类来封装多个类中的行为，而又不想生成太多的子类。
*/
namespace MediatorPattern
{
	class MediatorPattern {
	public:
		MediatorPattern();
	};
}

/***********************************************************************
* 备忘录模式（Memento Pattern）
* 在不破坏封装性的前提下，捕获一个对象的内部状态，并在该对象之外保存这个状态。
* 
* 应用实例：1、后悔药。 2、打游戏时的存档。 3、Windows 里的 ctri + z。
*			4、IE 中的后退。 4、数据库的事务管理。
* 
* 优点：	1、给用户提供了一种可以恢复状态的机制，可以方便地回到某个历史状态。 
*			2、实现了信息的封装，使得用户不需要关心状态的保存细节。
* 
* 注意事项：1、为了符合迪米特原则，还要增加一个管理备忘录的类。 
*			2、为了节约内存，可使用原型模式+备忘录模式。
*/
namespace MementoPattern
{
	class MementoPattern {
	public:
		MementoPattern();
	};
}

/***********************************************************************
* 观察者模式（Observer Pattern）
* 一个对象（目标对象）的状态发生改变，所有的依赖对象（观察者对象）都将得到通知，进行广播通知。
* 
* 优点：	1、观察者和被观察者是抽象耦合的。 
*			2、建立一套触发机制。
* 
* 缺点：	1、如果一个被观察者对象有很多的直接和间接的观察者的话，将所有的观察者都通知到会花费很多时间。
*			2、如果在观察者和观察目标之间有循环依赖的话，观察目标会触发它们之间进行循环调用，可能导致系统崩溃。 
*			3、观察者模式没有相应的机制让观察者知道所观察的目标对象是怎么发生变化的，而仅仅只是知道观察目标发生了变化。
*
* 注意事项：1、JAVA 中已经有了对观察者模式的支持类。 
*			2、避免循环引用。 
*			3、如果顺序执行，某一观察者错误会导致系统卡壳，一般采用异步方式。
*/
namespace ObserverPattern
{
	class ObserverPattern {
	public:
		ObserverPattern();
	};
}

/***********************************************************************
* 状态模式（State Pattern）
* 对象的行为依赖于它的状态（属性），并且可以根据它的状态改变而改变它的相关行为。
* 
* 优点：	1、封装了转换规则。 
*			2、枚举可能的状态，在枚举状态之前需要确定状态种类。 
*			3、将所有与某个状态有关的行为放到一个类中，并且可以方便地增加新的状态，\
*				只需要改变对象状态即可改变对象的行为。 
*			4、允许状态转换逻辑与状态对象合成一体，而不是某一个巨大的条件语句块。 
*			5、可以让多个环境对象共享一个状态对象，从而减少系统中对象的个数。
* 
* 缺点：	1、状态模式的使用必然会增加系统类和对象的个数。
*			2、状态模式的结构与实现都较为复杂，如果使用不当将导致程序结构和代码的混乱。 
*			3、状态模式对"开闭原则"的支持并不太好，对于可以切换状态的状态模式，\
*				增加新的状态类需要修改那些负责状态转换的源代码，否则无法切换到新增状态，\
*				而且修改某个状态类的行为也需修改对应类的源代码。
*/
namespace StatePattern
{
	class StatePattern {
	public:
		StatePattern();
	};
}

/***********************************************************************
* 空对象模式（Null Object Pattern）
* 一个空对象取代 NULL 对象实例的检查。Null 对象不是检查空值，而是反应一个不做任何动作的关系。
* 这样的 Null 对象也可以在数据不可用的时候提供默认的行为。
* 
* 简单来说不用NULL，而是用一个初始化之后、没有数据的对象来代替。
*/
namespace NullObjectPattern
{
	class NullObjectPattern {
	public:
		NullObjectPattern();
	};
}

/***********************************************************************
* 策略模式（Strategy Pattern）
* 定义一系列的算法,把它们一个个封装起来, 并且使它们可相互替换。
* 
* 优点：	1、算法可以自由切换。 2、避免使用多重条件判断。 3、扩展性良好。
* 
* 使用场景：1、如果在一个系统里面有许多类，它们之间的区别仅在于它们的行为，\
*				那么使用策略模式可以动态地让一个对象在许多行为中选择一种行为。 
*			2、一个系统需要动态地在几种算法中选择一种。 
*			3、如果一个对象有很多的行为，如果不用恰当的模式，\
*				这些行为就只好使用多重的条件选择语句来实现。
*/
namespace StrategyPattern
{
	class StrategyPattern {
	public:
		StrategyPattern();
	};
}

/***********************************************************************
* 模板模式（Template Pattern）
* 定义一个操作中的算法的骨架，而将一些步骤延迟到子类中。
* 模板方法使得子类可以不改变一个算法的结构即可重定义该算法的某些特定步骤。
* 例如阿里云的C++SDK中大量使用模板模式，定义Http请求收发处理等。
* 
* 优点：	1、封装不变部分，扩展可变部分。 
*			2、提取公共代码，便于维护。 
*			3、行为由父类控制，子类实现。
* 
* 使用场景：1、有多个子类共有的方法，且逻辑相同。
*			2、重要的、复杂的方法，可以考虑作为模板方法。
*/
namespace TemplatePattern
{
	class TemplatePattern {
	public:
		TemplatePattern();
	};
}

/***********************************************************************
* 访问者模式（Visitor Pattern）
* 需要对一个对象结构中的对象进行很多不同的并且不相关的操作，
* 而需要避免让这些操作"污染"这些对象的类，使用访问者模式将这些封装到类中。
* 
* 优点：	1、符合单一职责原则。 
*			2、优秀的扩展性。 
*			3、灵活性。
* 
* 缺点：	1、具体元素对访问者公布细节，违反了迪米特原则。 
*			2、具体元素变更比较困难。 
*			3、违反了依赖倒置原则，依赖了具体类，没有依赖抽象。
*/
namespace VisitorPattern
{
	class VisitorPattern {
	public:
	};
}



