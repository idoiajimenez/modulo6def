pipeline {
    agent any 
    stages {
        stage('Documentación') { 
            steps {
                sh 'make doc'
            }
	    post {
      		always {
			publishHTML([allowMissing: false, alwaysLinkToLastBuild: true, keepAll: true, reportDir: 'html', reportFiles: 'index.html', reportName: 'HTML Report', reportTitles: ''])
      		}
    	    }
        	
	}

    }
    
}
