array = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765]
valor = 610


function busca_binaria(){
		let max = array.length -1
		let min = 0

		while (min != valor){
		let meio = Math.floor((min+max)/2)
		if (array[meio] == valor){
			return
		}
		else if (array[meio] < valor){
			min = meio
		}
		else if (array[meio] > valor){
			max = meio
		}
	}
}