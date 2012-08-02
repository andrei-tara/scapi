/**
* This file is part of SCAPI.
* SCAPI is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
* SCAPI is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
* You should have received a copy of the GNU General Public License along with SCAPI.  If not, see <http://www.gnu.org/licenses/>.
*
* Any publication and/or code referring to and/or based on SCAPI must contain an appropriate citation to SCAPI, including a reference to http://crypto.cs.biu.ac.il/SCAPI.
*
* SCAPI uses Crypto++, Miracl, NTL and Bouncy Castle. Please see these projects for any further licensing issues.
*
*/
package edu.biu.scapi.midLayer.asymmetricCrypto.encryption;

import java.security.spec.AlgorithmParameterSpec;


/**
 * Parameter for ElGamal initialization.
 * ElGamal relies on DlogGroup and it's initialization parameters contains the parameters for the dlog's initialization.
 * 
 * @author Cryptography and Computer Security Research Group Department of Computer Science Bar-Ilan University (Moriya Farbstein)
 *
 */
public class ElGamalParameterSpec implements AlgorithmParameterSpec {

	private String dlogName;
	private String provider;
	private AlgorithmParameterSpec params;
	
	/**
	 * Constructor that gets the dlog name parameters that required for ElGamal initialization
	 * @param dlogName dlog group type
	 * @param params dlog group description
	 */
	public ElGamalParameterSpec(String dlogName, AlgorithmParameterSpec params){
		this.dlogName = dlogName;
		this.params = params;
	}
	
	/**
	 * Constructor that gets the dlog name parameters that required for ElGamal initialization
	 * @param dlogName dlog group type
	 * @param params dlog group description
	 */
	public ElGamalParameterSpec(String dlogName, String provider, AlgorithmParameterSpec params){
		this.dlogName = dlogName;
		this.provider = provider;
		this.params = params;
	}
	
	/**
	 * @return the dlog name
	 */
	public String getDlogName(){
		return dlogName;
	}
	
	/**
	 * @return the provider name
	 */
	public String getProviderName(){
		return provider;
	}
	
	/**
	 * 
	 * @return DlogGroup description
	 */
	public AlgorithmParameterSpec getGroupParams(){
		return params;
	}
}
