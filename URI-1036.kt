import java.util.Scanner
import kotlin.math.sqrt
import kotlin.system.exitProcess

fun main(args: Array<String>){
    val reader = Scanner(System.`in`)
    var A : Double = reader.nextDouble()
    var B : Double = reader.nextDouble()
    var C : Double = reader.nextDouble()
    var delta : Double = (B*B) - 4*A*C
    if(A == 0.0 || delta <= 0){
        println("Impossivel calcular")
        exitProcess(0)
    }

    var X1 = (-B + sqrt(delta))/(2*A)
    var X2 = (-B - sqrt(delta))/(2*A)

    println("R1 = %.5f".format(X1))
    println("R2 = %.5f".format(X2))
}