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
package edu.biu.scapi.primitives.prg.bc;

import java.security.NoSuchAlgorithmException;
import java.security.SecureRandom;

import javax.crypto.SecretKey;

import org.bouncycastle.crypto.engines.RC4Engine;

import edu.biu.scapi.primitives.prg.RC4;

/**
 * Concrete class of PRF for RC4. This class is a wrapper class for BC implementation of RC4.
 * 
 * @author Cryptography and Computer Security Research Group Department of Computer Science Bar-Ilan University (Meital Levy)
 *
 */
public final class BcRC4 extends BcPRG implements RC4{
	
	/**
	 * Passes the RC4Engine of BC to the abstract super class
	 */
	public BcRC4(){
		super(new RC4Engine());
	}
	
	public BcRC4(SecureRandom random){
		super(new RC4Engine(), random);
	}
	
	public BcRC4(String randNumGenAlg) throws NoSuchAlgorithmException {
		
		super(new RC4Engine(),  SecureRandom.getInstance(randNumGenAlg));
	}
	
	public void setKey(SecretKey secretKey) {
		
		//sets the parameters
		super.setKey(secretKey);
		
		//RC4 has a problem in the first 1024 bits. by ignoring these bytes, we bypass this problem.
		byte[] out = new byte[128];
		getPRGBytes(out, 0, 128);
		
	}
	
}
