package usuarios;

public class LoginSenha{
	
private String login;
private String senha;
private String token;

LoginSenha(String nomeUsuario,String senhaUsuario,String token){
	if(verificaSenha(nomeUsuario) == true && 
			verificaSenha(senhaUsuario) == true){
		   this.login = nomeUsuario;
		   this.senha = senhaUsuario;
	       this.token = token;
	       System.out.println("Login e Senha Validos");
	}else {
		 System.out.println("login/senha não correspondem a regra");
		 System.out.println("login/senha devem conter no minimo 8 "
		 		            + "digitos ao menos 1 caracter especial"
		 		            + " e ao menos 1 numero"); 
	 }	       
 }

LoginSenha(String nomeUsuario,String senhaUsuario){
	       if(verificaSenha(nomeUsuario) == true && 
	    		   verificaSenha(senhaUsuario) == true){
	       this.login = nomeUsuario;
	       this.senha = senhaUsuario;
	       System.out.println("Login e Senha Validos");
  }else {
	 System.out.println("login/senha não correspondem a regra");
	 System.out.println("login/senha devem conter no minimo "
	 		            + "8 digitos ao menos 1 caracter especial"
		 		        + " e ao menos 1 numero"); 
   }
 }

final String [] comparador = {"A","B","C","D","E","F",
                             "G","H","I","J","K","L",
                             "M","N","O",
                             "P","Q","R","S","T","U","V"
                             ,"X","W","Y","Z"};
final String [] comparadorDeInteiros = {"0","1","2","3","4","5","6","7","8","9"};
final String [] comparadorDeCaracteresEspeciais = {"!","@","#","$","%","&"};

protected boolean verificaSenha(String loginSenha) {
	boolean mensagem = false;
	for(int i=0; i<comparador.length;i++){
	for(int j=0; j<comparadorDeCaracteresEspeciais.length;j++){
	for(int k=0; k<comparadorDeInteiros.length; k++) {	
	if(loginSenha.contains(comparador[i].toUpperCase()) && 
	   loginSenha.contains(comparadorDeCaracteresEspeciais[j]) &&
	   loginSenha.contains(comparadorDeInteiros[k]) && loginSenha.length() >=8){
		
	  mensagem = true;
	  return mensagem;
   }
	
  else if(!loginSenha.contains(comparador[i].toUpperCase()) && 
		  !loginSenha.contains(comparadorDeCaracteresEspeciais[j]) &&
		  !loginSenha.contains(comparadorDeInteiros[k]) && loginSenha.length() <=8){
	  mensagem = false;
      }
	
    }
   } 
  }
	return mensagem;
 }

public void setToken(String token){
	this.token = token;
 }

public void setLogin(String login){
	this.login = login;
 }

public void setSenha(String senha){
	this.senha = senha;
 }

public String getSenha(){
	return senha;
 }

public String getLogin() {
	return login;
 }
public String getToken() {
	return token;
 }
}


