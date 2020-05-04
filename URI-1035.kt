import java.util.*

fun main(args: Array<String>) {
    var reader = Scanner(System.`in`)
    var A : Int = reader.nextInt()
    var B : Int = reader.nextInt()
    var C : Int = reader.nextInt()
    var D : Int = reader.nextInt()

    if(B > C && D > A && (C + D) > (A + B) && C > 0 && D > 0 && A%2==0){
        println("Valores aceitos")
    }else{
        println("Valores nao aceitos")
    }
}