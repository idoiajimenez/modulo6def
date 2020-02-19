pipeline {
    agent any 
    stages {
        stage('Documentación') { 
            steps {
                sh 'make doc'
            }
	    
	    post {
      		always {
			publishHTML([allowMissing: false, 
					alwaysLinkToLastBuild: true, 
					keepAll: true, reportDir: 'html', 
					reportFiles: 'index.html', 
					reportName: 'Doxygen documentation', 
					reportTitles: ''])
      		}
    	    }
        	
	}
        stage('CppCheck') { 
            steps {
                sh 'make cppcheck-xml'
            }
    	    post {
      		always {
        		publishCppcheck displayErrorSeverity: true, 
			displayNoCategorySeverity: true, 
			displayPerformanceSeverity: true, 
			displayPortabilitySeverity: true, 
			displayStyleSeverity: true, 
			displayWarningSeverity: true, 
			failureThreshold: '1', 
			pattern: 'reports/cppcheck/report.xml' 
     		 }
    	    }
        }

    }
    
}
