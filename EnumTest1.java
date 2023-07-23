import java.util.Scanner;
//对多个结果且需要一一列举出来的建议用枚举，两个结果的用布尔类型；
public class EnumTest1 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

            switch(season.summer)
            {
                case spring:
                    System.out.println("helloworld，春天");
                    break;
                case summer:
                    System.out.println("你好，夏天");
                    break;
                case autumn:
                    System.out.println("helloworld，秋天");
                    break;
                case winter:
                    System.out.println("你好，冬天");
                    break;
                default:
                    System.out.println("输入有误，请重新输入");

            }


    }

}
enum season{
    spring,summer,autumn,winter;
}
