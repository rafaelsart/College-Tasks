public class Produto {
	private String nome;
	private int codigo;
	private int quantidade;	

	public Produto() {
	}

	public Produto(String nome, int codigo, int quantidade){
		this.nome = nome;
		this.codigo = codigo;
		this.quantidade = quantidade;
	}

	public String getNome(){
		return this.nome;
	}

	public int getCodigo(){
		return this.codigo;
	}

	public int getQuantidade(){
		return this.quantidade;
	}

	public void setNome(String nome){
		this.nome = nome;
	}

	public void setCodigo(int codigo){
		this.codigo = codigo;
	}

	public void setQuantidade(int quantidade){
		this.quantidade = quantidade;
	}


}
