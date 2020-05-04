import java.util.*

fun main(args: Array<String>){
    val reader =  Scanner(System.`in`)
    var cod:Int = reader.nextInt()
    var qtd:Int = reader.nextInt()

    when(cod){
        1 -> println("Total: R$ %.2f".format(qtd * 4.00))
        2 -> println("Total: R$ %.2f".format(qtd*4.50))
        3 -> println("Total: R$ %.2f".format(qtd*5.00))
        4 -> println("Total: R$ %.2f".format(qtd*2.00))
        5 -> println("Total: R$ %.2f".format(qtd*1.50))
    }
}