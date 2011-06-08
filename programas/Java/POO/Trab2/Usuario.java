public class Usuario {
	private String nome;
	private int id;
	private String senhaComum;
	private String senhaAdmin;

	public Usuario(String pass){
		this.senhaAdmin = "admin";
		this.senhaComum = "comum";

		if(pass.compareTo(senhaAdmin) == 0)
			System.out.println("Logado como administrador");
		if(pass.compareTo(senhaComum) == 0)
			System.out.println("Logado como usuario");
	}
	
	public String getNome(){
		return this.nome;
	}
	
	public int getId(){
		return this.id;
	}

	/*public String getSenha(){
		return this.senha;
	}*/

	public void setNome(String nome){
		this.nome = nome;
	}

	public void setId(int id){
		this.id = id;
	}

	/*public void setSenha(String senha){
		this.senha = senha;
	}*/
		
}
