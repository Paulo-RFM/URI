import java.util.*

fun main(args: Array<String>){
    val reader =Scanner(System.`in`)
    var num : Double = 0.0

        num = reader.nextDouble()
        if(num >= 0 && num <= 25){
            println("Intervalo [0,25]")
        }else if (num > 25 && num <= 50){
            println("Intervalo (25,50]")
        }else if(num > 50 && num <= 75){
            println("Intervalo (50,75]")
        }else if(num > 75 && num <=100){
            println("Intervalo (75,100]")
        }else{
            println("Fora de intervalo")
        }
}